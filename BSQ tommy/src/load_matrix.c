/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_matrix.c                                      :+:      :+:    :+:   */
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

int	verify_matrix(t_matrix *mat)
{
	int	i;
	int	j;

	i = -1;
	while (++i < mat->ymax)
	{
		j = -1;
		while (++j < mat->xmax)
		{
			if (mat->m[i][j] != mat->empt && mat->m[i][j] != mat->obst)
				return (-1);
		}
	}
	return (1);
}

char	*set_header(t_matrix *rock, char *str)
{
	int	max;
	int	i;

	max = ft_strlen(str);
	i = max - 1;
	while (i > max - 4)
	{
		if (i == (max - 1))
			rock->full = str[i];
		if (i == (max - 2))
			rock->obst = str[i];
		if (i == (max - 3))
			rock->empt = str[i];
		str[i] = ' ';
		i--;
	}
	rock->ymax = ft_atoi(str);
	return (str);
}

int	set_matrix(t_matrix *bottom, char *str, t_uint i)
{
	int	length;

	(void)str;
	(void)i;
	if (bottom->xmax == 0)
		bottom->xmax = ft_strlen(str);
	length = ft_strlen(str);
	if (bottom->xmax != length || bottom->ymax == 0)
	{
		free(str);
		return (-1);
	}
	bottom->m[i] = malloc(sizeof(char) * bottom->xmax + 1);
	ft_strlcpy(bottom->m[i], str, bottom->xmax + 1);
	return (bottom->xmax);
}

t_matrix	*make_a_matrix(char *str)
{
	t_matrix	*res;
	char		*line;
	t_uint		runner;
	t_uint		i;

	res = malloc(sizeof(t_matrix));
	init_var3(&runner, &i, (t_uint *)&(res->xmax));
	line = set_header(res, get_line(str, &runner));
	res->m = malloc(sizeof(char *) * res->ymax);
	while (line != 0)
	{
		free(line);
		runner++;
		line = get_line(str, &runner);
		if (!line)
			break ;
		if (set_matrix(res, line, i) == -1 || res->ymax == 0)
		{
			res->ymax = i;
			destroy_a_matrix(res);
			return (0);
		}
		i++;
	}
	return (res);
}

t_matrix	*load_a_matrix(t_arg *rock, t_uint item)
{
	t_matrix	*res;
	char		*inbet;

	res = 0;
	if (rock->type == 1)
		res = make_a_matrix(rock->path[0]);
	else
	{
		inbet = get_a_matrix(rock, item);
		if (inbet)
			res = make_a_matrix(inbet);
		free(inbet);
	}
	if (res != 0)
	{
		if ((verify_matrix(res) == -1) || (res->ymax == 0))
		{
			destroy_a_matrix(res);
			return (0);
		}
	}
	return (res);
}
