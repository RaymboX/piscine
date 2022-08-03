/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_valid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:34:30 by mgagnon           #+#    #+#             */
/*   Updated: 2022/02/09 22:34:23 by mgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"

//retourne 1 si file valide
int	ft_file_valid(int *ALL_INT, char *ALL_CHAR, char *filename)
{
	if (ft_first_line_valid(ALL_INT, ALL_CHAR, filename) != 0
		&& ft_map_valid(ALL_INT, ALL_CHAR) != 0
		&& close(FILE_DESC) != -1)
		return (1);
	return (0);
}

//retourne 1 si map valide
int	ft_map_valid(int *ALL_INT, char *ALL_CHAR)
{
	OBS_TOTAL = 0;
	TRACKER_Y = 0;
	TRACKER_X = 0;
	while (read(FILE_DESC, &BUFFER, 1) > 0 && TRACKER_Y < MAPLIMIT_Y)
	{
		if (BUFFER == '\n')
		{
			if (ft_change_line_ckr(ALL_INT) == 0)
				return (0);
		}
		else if (ft_mapchar_valid(ALL_INT, ALL_CHAR) == 1)
			TRACKER_X += 1;
		else
			return (0);
	}
	if (TRACKER_Y == MAPLIMIT_Y && read(FILE_DESC, &BUFFER, 1) == 0)
		return (1);
	return (0);
}

// retourne 1 si ok
int	ft_change_line_ckr(int *ALL_INT)
{
	if (TRACKER_Y == 0)
	{
		if (TRACKER_X > 0)
			MAPLIMIT_X = TRACKER_X;
		else
			return (0);
	}
	else
	{
		if (MAPLIMIT_X != TRACKER_X)
			return (0);
	}
	TRACKER_Y += 1;
	TRACKER_X = 0;
	return (1);
}

int	ft_mapchar_valid(int *ALL_INT, char *ALL_CHAR)
{
	if (BUFFER == MAPCHAR_OBS)
	{
		OBS_TOTAL += 1;
		return (1);
	}
	else if (BUFFER == MAPCHAR_VIDE)
		return (1);
	else
		return (0);
}
