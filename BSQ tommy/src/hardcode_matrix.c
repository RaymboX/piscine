/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hardcode_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboboe <rboboe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:59:47 by rboboe            #+#    #+#             */
/*   Updated: 2022/02/07 20:02:54 by rboboe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "../lib/ft_lib.h"
#include "ft_bsq.h"

void	fill_matrix(char mat[7][14])
{
	ft_strcpy (mat[0], ".........o...");
	ft_strcpy (mat[1], ".......o.....");
	ft_strcpy (mat[2], "...o.........");
	ft_strcpy (mat[3], ".............");
	ft_strcpy (mat[4], "...o..o......");
	ft_strcpy (mat[5], "o..o....o....");
	ft_strcpy (mat[6], "o.o..o..o....");
}

t_matrix	*hardcode_matrix(void)
{
	int			i;
	t_matrix	*map;
	char		tab[7][14];

	fill_matrix(tab);
	map = malloc(sizeof(t_matrix));
	map->xmax = 14;
	map->ymax = 7;
	map->empt = '.';
	map->obst = 'o';
	map->full = '#';
	map->m = malloc(sizeof(map->m) * map->ymax);
	i = 0;
	while (i <= map->ymax)
	{
		map->m[i] = malloc(sizeof(char) * map->xmax + 1);
		ft_strcpy(map->m[i], tab[i]);
		i++;
	}
	return (map);
}
