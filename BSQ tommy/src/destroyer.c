/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroyer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboboe <rboboe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:05:02 by rboboe            #+#    #+#             */
/*   Updated: 2022/02/08 12:29:18 by rboboe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/ft_lib.h"
#include "ft_bsq.h"
#include <stdlib.h>
#include <stdio.h>

void	destroy_a_matrix(t_matrix *rock)
{
	int	i;

	i = 0;
	while (i < (int)rock->ymax)
	{
		free(rock->m[i]);
		rock->m[i] = 0;
		i++;
	}
	rock->xmax = 0;
	rock->ymax = 0;
	rock->obst = 0;
	rock->full = 0;
	rock->empt = 0;
	free(rock->m);
	rock->m = 0;
	free(rock);
	rock = 0;
}

void	destroy_a_arg(t_arg *rock)
{
	int	i;

	i = 0;
	while (i < (int)rock->nb && rock->path != 0)
	{
		free(rock->path[i]);
		rock->path[i] = 0;
		i++;
	}
	rock->nb = 0;
	rock->status = 0;
	rock->type = 0;
	free(rock->path);
	rock->path = 0;
	free(rock);
	rock = 0;
}
