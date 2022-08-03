/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conflict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:48:07 by mgagnon           #+#    #+#             */
/*   Updated: 2022/02/09 22:33:07 by mgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"

extern int	*g_obstacle;

// sqr in map = 1
int	ft_sqr_in_map(int *ALL_INT)
{
	if (SQRTEST_X + SQRTEST_SIZE < MAPLIMIT_X
		&& SQRTEST_Y + SQRTEST_SIZE < MAPLIMIT_Y)
		return (1);
	else
		return (0);
}

// verifie la validite de tous les obstacles si valide et pas conflict = 1
int	ft_all_obstacle_conflict(int *ALL_INT)
{
	OBS_INDEX = 0;
	while (OBS_INDEX < OBS_TOTAL * 2)
	{
		if (ft_obstacle_valid(ALL_INT) == 1)
		{
			if (ft_conflict_sqr((SQRTEST_X + SQRTEST_SIZE),
					(SQRTEST_Y + SQRTEST_SIZE),
					g_obstacle[OBS_INDEX], g_obstacle[OBS_INDEX + 1]) == 1)
				return (0);
		}		
		OBS_INDEX += 2;
	}
	return (1);
}	

//obstacle valide = 1
int	ft_obstacle_valid(int *ALL_INT)
{
	if (g_obstacle[OBS_INDEX] < SQRTEST_X
		|| g_obstacle[OBS_INDEX + 1] < SQRTEST_Y)
		return (0);
	else
		return (1);
}

//conflict = 1
int	ft_conflict_sqr(int sqrx_n_size, int sqry_n_size, int x, int y)
{
	if (sqrx_n_size >= x && sqry_n_size >= y)
		return (1);
	else
		return (0);
}	
