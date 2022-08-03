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

void	init_solution(t_sol *soluce)
{
	soluce->size = 0;
	soluce->x = 0;
	soluce->y = 0;
}

int	min(t_matrix *mat, int x, int y)
{
	int	i;
	int	j;
	int	k;

	i = mat->m[x - 1][y];
	j = mat->m[x][y - 1];
	k = mat->m[x - 1][y - 1];
	if (i < j)
	{
		if (i < k)
			return (i);
		else
			return (k);
	}
	else
	{
		if (j < k)
			return (j);
		else
			return (k);
	}
	return (0);
}
