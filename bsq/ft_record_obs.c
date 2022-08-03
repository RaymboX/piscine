/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_record_obs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:48:55 by mgagnon           #+#    #+#             */
/*   Updated: 2022/02/09 22:38:01 by mgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"

extern int	*g_obstacle;

int	ft_record_obs(int *ALL_INT, char *ALL_CHAR, char *filename)
{
	FILE_DESC = open(filename, O_RDONLY);
	if (FILE_DESC != -1)
	{
		ft_skip_first_line(ALL_INT, ALL_CHAR);
		OBS_INDEX = 0;
		TRACKER_Y = 0;
		TRACKER_X = 0;
		while (OBS_INDEX < OBS_TOTAL * 2 && read(FILE_DESC, &BUFFER, 1) > 0)
			ft_char_analyst(ALL_INT, ALL_CHAR);
		if (OBS_INDEX == OBS_TOTAL * 2 || close(FILE_DESC) != -1)
			return (1);
	}
	return (0);
}

void	ft_skip_first_line(int *ALL_INT, char *ALL_CHAR)
{
	while (read(FILE_DESC, &BUFFER, 1) > 0 && BUFFER != '\n')
	{
	}
}

void	ft_char_analyst(int *ALL_INT, char *ALL_CHAR)
{
	if (BUFFER == '\n')
	{
		TRACKER_Y += 1;
		TRACKER_X = 0;
	}
	else
	{
		if (BUFFER == MAPCHAR_OBS)
		{
			g_obstacle[OBS_INDEX] = TRACKER_X;
			g_obstacle[OBS_INDEX + 1] = TRACKER_Y;
			OBS_INDEX += 2;
		}
		TRACKER_X += 1;
	}
}		
