/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:00:56 by mgagnon           #+#    #+#             */
/*   Updated: 2022/02/09 22:49:22 by mgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"

int	*g_obstacle;

int	main(int argc, char **argv)
{
	int		i[16];
	char	c[5];

	g_obstacle = 0;
	if (argc == 1)
		ft_stdin_case(ALL_INT, ALL_CHAR);
	else
	{
		FILE_INDEX = 1;
		while (FILE_INDEX < argc)
		{
			if (ft_map_error(ALL_INT, ALL_CHAR, &argv[FILE_INDEX][0]) == 0)
				ft_write_map(ALL_INT, ALL_CHAR);
			else
				write (1, "map error\n", 10);
			free(g_obstacle);
			FILE_INDEX++;
		}
	}
}

void	ft_stdin_case(int *ALL_INT, char *ALL_CHAR)
{
	char	stdinfile[2];

	stdinfile[0] = 'k';
	stdinfile[1] = '\0';
	ft_stdin_write(ALL_INT, ALL_CHAR, stdinfile);
	if (ft_map_error(ALL_INT, ALL_CHAR, stdinfile) == 0)
		ft_write_map(ALL_INT, ALL_CHAR);
	else
		write (1, "map error\n", 10);
	free(g_obstacle);
}

int	ft_map_error(int *ALL_INT, char *ALL_CHAR, char *filename)
{
	if (ft_file_valid(ALL_INT, ALL_CHAR, filename) == 1)
	{
		if (OBS_TOTAL > 0)
		{
			g_obstacle = (int *)malloc(sizeof(int) * OBS_TOTAL * 2);
			if (ft_record_obs(ALL_INT, ALL_CHAR, filename) == 0)
				return (1);
		}
		else
		{
			g_obstacle = (int *)malloc(sizeof(int) * 2);
			g_obstacle[0] = -1;
			g_obstacle[1] = -1;
		}
		ft_find_bigger_sqr(ALL_INT);
		if (SQR_SIZE >= 0)
			return (0);
	}
	return (1);
}
