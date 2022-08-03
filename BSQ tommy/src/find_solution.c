/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Team BSQ                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:05:02 by rboboe            #+#    #+#             */
/*   Updated: 2022/02/08 12:29:18 by rboboe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/ft_lib.h"
#include "ft_bsq.h"
#include <stdlib.h>
#include <stdio.h>
#define I 0
#define J 1
#define S 2

t_matrix	*create_mat(t_matrix *mat)
{
	t_matrix	*dp;
	int			i;

	dp = malloc(sizeof(t_matrix));
	dp->xmax = mat->xmax;
	dp->ymax = mat->ymax;
	dp->maxsize = 0;
	dp->m = malloc(sizeof(char *) * dp->ymax);
	i = 0;
	while (i < dp->ymax)
	{
		dp->m[i] = malloc(sizeof(char) * dp->xmax);
		i++;
	}
	return (dp);
}

t_matrix	*create_dp(t_matrix *mat)
{
	int			i[2];
	t_matrix	*dp;

	dp = create_mat(mat);
	i[I] = 0;
	while (i[I] < mat->ymax)
	{
		i[J] = 0;
		while (i[J] < mat->xmax)
		{
			if (mat->empt == mat->m[i[I]][i[J]])
				dp->m[i[I]][i[J]] = 1;
			else
				dp->m[i[I]][i[J]] = 0;
			i[J]++;
		}
		i[I]++;
	}
	return (dp);
}

t_sol	solution(t_matrix *dp)
{
	int		i[3];
	t_sol	sol;

	init_solution(&sol);
	i[I] = -1;
	i[S] = 0;
	while (++i[I] < dp->ymax)
	{
		i[J] = -1;
		while (++i[J] < dp->xmax)
		{
			if (dp->m[i[I]][i[J]] == 1 && i[I] - 1 >= 0 && i[J] - 1 >= 0)
				dp->m[i[I]][i[J]] = min(dp, i[I], i[J]) + 1;
			if (sol.size < dp->m[i[I]][i[J]])
			{
				sol.size = dp->m[i[I]][i[J]];
				sol.x = i[J];
				sol.y = i[I];
			}
		}
	}
	return (sol);
}

int	find_solution(t_matrix *map)
{
	t_matrix	*dp;
	t_sol		soluce;

	dp = create_dp(map);
	soluce = solution(dp);
	apply_solution(map, soluce);
	destroy_a_matrix(dp);
	return (0);
}
