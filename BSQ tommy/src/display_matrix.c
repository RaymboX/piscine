/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboboe <rboboe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:05:02 by rboboe            #+#    #+#             */
/*   Updated: 2022/02/08 12:29:18 by rboboe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/ft_lib.h"
#include "ft_bsq.h"

void	apply_solution(t_matrix *mat, t_sol sol)
{
	int	i;
	int	j;

	i = sol.y - (sol.size - 1);
	while (i <= sol.y)
	{
		j = sol.x - (sol.size - 1);
		while (j <= sol.x)
		{
			mat->m[i][j] = mat->full;
			j++;
		}
		i++;
	}
	display_matrix(mat);
}

void	display_matrix(t_matrix *map)
{
	int	j;

	j = 0;
	ft_putstr("Grid: ");
	ft_putchar(map->empt);
	ft_putchar(map->obst);
	ft_putchar(map->full);
	ft_putchar('\n');
	while (j < map->ymax)
	{
		ft_putstr(map->m[j]);
		ft_putchar('\n');
		j++;
	}
}

void	display_mat_dp(t_matrix *dp)
{
	int	i;
	int	j;

	i = 0;
	while (i < dp->ymax)
	{
		j = 0;
		while (j < dp->xmax)
		{		
			ft_putchar(dp->m[i][j] + 0x30);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
