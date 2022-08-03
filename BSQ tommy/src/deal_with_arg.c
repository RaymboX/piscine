/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deal_with_arg.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Team BSQ                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:11:00 by Tbeaulie          #+#    #+#             */
/*   Updated: 2022/02/07 11:11:00 by Tbeaulie         ###   ###########       */
/*                                                                            */
/* ************************************************************************** */
#include"../lib/ft_lib.h"
#include"ft_bsq.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 64

char	*buffer_realloc(char *c)
{
	char		*new;
	static int	nb = 2;

	new = malloc(sizeof(char) * BUF_SIZE * nb);
	ft_strncpy(new, c, BUF_SIZE * nb);
	free(c);
	nb ++;
	return (new);
}

char	*get_ter_line(char *buf, int *ptr, int line)
{
	int		i;
	char	c;

	i = 0;
	while (i < line)
	{
		read(0, &c, 1);
		buf[*ptr] = c;
		(*ptr)++;
		if (c == '\n')
			i++;
		if ((*ptr) % BUF_SIZE == BUF_SIZE - 2 && (*ptr) != 0)
		{
			buf[*ptr + 1] = 0;
			buf = buffer_realloc(buf);
		}
	}
	buf[*ptr + 1] = 0;
	return (buf);
}

char	*get_terminal(void)
{
	char	*buf;
	char	c;
	int		i;
	int		line;

	buf = malloc(sizeof(char) * BUF_SIZE);
	c = ' ';
	i = 0;
	while (c != '\n' && i < BUF_SIZE)
	{
		read(0, &c, 1);
		if (c != 0)
		{
			buf[i] = c;
			i++;
		}
	}
	line = ft_atoi_header(buf);
	if (line < 1)
	{
		free(buf);
		return (0);
	}
	buf = get_ter_line(buf, &i, line);
	return (buf);
}

t_arg	*get_file(int argc, char **argv)
{
	t_arg	*res;
	int		i;

	res = malloc(sizeof(t_arg));
	res->type = 2;
	res->nb = argc - 1;
	res->path = malloc(sizeof(res->path) * res->nb);
	i = 1;
	while (i < argc)
	{
		res->path[i - 1] = malloc(sizeof(char) * ft_strlen(argv[i]) + 1);
		ft_strcpy(res->path[i - 1], argv[i]);
		i++;
	}
	return (res);
}

t_arg	*deal_with_arg(int argc, char **argv)
{
	t_arg	*rock;

	(void)argv;
	if (argc == 1)
	{
		rock = malloc(sizeof(t_arg));
		rock->type = 1;
		rock->nb = 1;
		rock->path = malloc(sizeof(char *));
		rock->path[0] = get_terminal();
		if (rock->path[0] == 0)
			rock->status = -1;
		else
			rock->status = 0;
	}
	else
		rock = get_file(argc, argv);
	return (rock);
}
