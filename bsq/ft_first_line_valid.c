/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_line_valid.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:40:41 by mgagnon           #+#    #+#             */
/*   Updated: 2022/02/09 22:36:58 by mgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"
//Verifie si ligne 1 valide / valide = 1 / fail return = 0
int	ft_first_line_valid(int *ALL_INT, char *ALL_CHAR, char *filename)
{
	if (ft_firstline_charcount(ALL_INT, ALL_CHAR, filename) < 4)
		return (0);
	FILE_DESC = open(filename, O_RDONLY);
	if (FILE_DESC != -1 && ft_maplimity_record(ALL_INT, ALL_CHAR) != 0
		&& ft_mapchar_record(ALL_INT, ALL_CHAR) == 1)
		return (1);
	return (0);
}		

//enregistre nombre de ligne / fail = 0 
// BUFFER retourne sur position MAPCHAR_VIDE
int	ft_maplimity_record(int *ALL_INT, char *ALL_CHAR)
{
	MAPLIMIT_Y = 0;
	if (read(FILE_DESC, &BUFFER, 1) <= 0)
		return (0);
	TRACKER_X = 0;
	while (TRACKER_X < FIRSTLINE_COUNT - 3 && BUFFER >= '0' && BUFFER <= '9')
	{
		MAPLIMIT_Y *= 10;
		MAPLIMIT_Y += (int)BUFFER - '0';
		if (read(FILE_DESC, &BUFFER, 1) <= 0)
			return (0);
		TRACKER_X++;
	}
	if (TRACKER_X < FIRSTLINE_COUNT - 3)
		return (0);
	return (MAPLIMIT_Y);
}

// record all mapchar / good = 1 / retour sur BUFFER = '\n'
int	ft_mapchar_record(int *ALL_INT, char *ALL_CHAR)
{
	if (ft_printable_char(ALL_CHAR) == 1)
	{
		MAPCHAR_VIDE = BUFFER;
		if (read(FILE_DESC, &BUFFER, 1) > 0
			&& ft_printable_char(ALL_CHAR) == 1
			&& BUFFER != MAPCHAR_VIDE)
		{
			MAPCHAR_OBS = BUFFER;
			if (read(FILE_DESC, &BUFFER, 1) > 0
				&& ft_printable_char(ALL_CHAR) == 1
				&& BUFFER != MAPCHAR_VIDE
				&& BUFFER != MAPCHAR_OBS)
			{
				MAPCHAR_SQR = BUFFER;
				if (read(FILE_DESC, &BUFFER, 1) > 0 && BUFFER == '\n')
					return (1);
			}
		}
	}
	return (0);
}

//si printable = 1
int	ft_printable_char(char *ALL_CHAR)
{
	if (BUFFER >= ' ' && BUFFER < 127)
		return (1);
	else
		return (0);
}

//retourne count dans FIRSTLINE_COUNT et return fail = 0
int	ft_firstline_charcount(int *ALL_INT, char *ALL_CHAR, char *filename)
{
	FILE_DESC = open(filename, O_RDONLY);
	if (FILE_DESC == -1 && read(FILE_DESC, &BUFFER, 1) > 0)
		return (0);
	FIRSTLINE_COUNT = 0;
	while (read(FILE_DESC, &BUFFER, 1) > 0 && BUFFER && BUFFER != '\n')
		FIRSTLINE_COUNT++;
	if (close(FILE_DESC) == 0 && BUFFER == '\n')
		return (FIRSTLINE_COUNT);
	return (0);
}
