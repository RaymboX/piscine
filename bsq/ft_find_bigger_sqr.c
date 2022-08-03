/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_bigger_sqr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:34:35 by mgagnon           #+#    #+#             */
/*   Updated: 2022/02/09 22:36:16 by mgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"

void	ft_find_bigger_sqr(int *ALL_INT)
{
	ft_sqr_reset(ALL_INT);
	TRACKER_Y = 0;
	while (TRACKER_Y < MAPLIMIT_Y)
	{
		TRACKER_X = 0;
		while (TRACKER_X < MAPLIMIT_X)
		{
			ft_sqrtry_update(ALL_INT);
			while (ft_sqr_in_map(ALL_INT) == 1
				&& ft_all_obstacle_conflict(ALL_INT) == 1)
				SQRTEST_SIZE += 1;
			SQRTEST_SIZE -= 1;
			ft_sqr_update(ALL_INT);
			TRACKER_X++;
		}
		TRACKER_Y++;
	}
}	

void	ft_sqr_reset(int *ALL_INT)
{	
	SQR_X = -1;
	SQR_Y = -1;
	SQR_SIZE = -1;
}

void	ft_sqrtry_update(int *ALL_INT)
{
	SQRTEST_X = TRACKER_X;
	SQRTEST_Y = TRACKER_Y;
	SQRTEST_SIZE = SQR_SIZE + 1;
}

void	ft_sqr_update(int *ALL_INT)
{
	if (SQRTEST_SIZE > SQR_SIZE)
	{
		SQR_X = SQRTEST_X;
		SQR_Y = SQRTEST_Y;
		SQR_SIZE = SQRTEST_SIZE;
	}
}
