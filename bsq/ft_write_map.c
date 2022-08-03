/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:58:20 by mgagnon           #+#    #+#             */
/*   Updated: 2022/02/09 22:47:03 by mgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"

extern int	*g_obstacle;

void	ft_write_map(int *ALL_INT, char *ALL_CHAR)
{
	OBS_INDEX = 0;
	TRACKER_Y = 0;
	while (TRACKER_Y < MAPLIMIT_Y)
	{
		TRACKER_X = 0;
		while (TRACKER_X < MAPLIMIT_X)
		{
			ft_write_mapchar(ALL_INT, ALL_CHAR);
			TRACKER_X++;
		}
		TRACKER_Y++;
		write(1, "\n", 1);
	}
}

void	ft_write_mapchar(int *ALL_INT, char *ALL_CHAR)
{
	if (TRACKER_X == g_obstacle[OBS_INDEX]
		&& TRACKER_Y == g_obstacle[OBS_INDEX + 1])
	{
		write(1, &MAPCHAR_OBS, 1);
		OBS_INDEX += 2;
	}
	else if (TRACKER_X >= SQR_X && TRACKER_X <= SQR_X + SQR_SIZE
		&& TRACKER_Y >= SQR_Y && TRACKER_Y <= SQR_Y + SQR_SIZE)
		write(1, &MAPCHAR_SQR, 1);
	else
		write(1, &MAPCHAR_VIDE, 1);
}
