/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_manipulation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Team BSQ                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:11:00 by Tbeaulie          #+#    #+#             */
/*   Updated: 2022/02/07 11:11:00 by Tbeaulie         ###   ###########       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/ft_lib.h"
#include "ft_bsq.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	path_valide(char *str)
{
	if (str[0] == '.' && str[1] == 0)
		return (0);
	else
		return (1);
	return (-1);
}

char	*get_a_matrix(t_arg *rock, t_uint item)
{
	char	*res;
	int		size;
	int		fd;

	res = 0;
	if (!path_valide(rock->path[item - 1]))
		return (res);
	size = ft_check_file_size(rock->path[item - 1]);
	if (size)
	{
		res = (char *)malloc(sizeof(char) * size + 1);
		fd = open(rock->path[item - 1], O_RDONLY);
		if (fd < 0)
		{
			close(fd);
			free(res);
			return (0);
		}
		read(fd, res, size);
	}
	return (res);
}

int	ft_check_file_size(char *path)
{
	int		fd;
	int		res;
	char	c;
	int		readed;

	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		return (0);
	}
	res = 0;
	readed = 1;
	while (readed != 0)
	{
		readed = read(fd, &c, 1);
		res++;
	}
	close(fd);
	return (res);
}

char	*get_line(char *c, t_uint *i)
{
	t_uint	start;
	char	*res;

	start = *i;
	while (c[*i] != '\n' && c[*i] != 0)
		(*i)++;
	if (start == *i)
		return (0);
	res = (char *)malloc(sizeof(char) * (*i - start) + 1);
	ft_strlcpy(res, &c[start], *i - start + 1);
	return (res);
}
