/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbeaulie                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 05:59:00 by Tbeaulie          #+#    #+#             */
/*   Updated: 2022/02/08 12:23:10 by rboboe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"../lib/ft_lib.h"
#include"ft_bsq.h"
#include<stdio.h>

int	main(int argc, char **argv)
{
	t_arg		*rock;
	t_matrix	*bottom;
	int			j;

	rock = deal_with_arg(argc, argv);
	j = 1;
	while (j <= (int)rock->nb && rock->status >= 0)
	{
		bottom = load_a_matrix(rock, j);
		if (bottom == 0)
			ft_putstr("map error\n");
		else
		{
			find_solution(bottom);
			destroy_a_matrix(bottom);
		}
		j++;
	}
	if (rock->status < 0)
		ft_putstr("map error\n");
	destroy_a_arg(rock);
	return (0);
}
