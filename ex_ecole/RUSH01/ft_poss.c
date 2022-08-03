/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_poss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:41:34 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/29 20:24:02 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_number_zero(int *number)
{
	int	i;
	
	i = 0;
	while (i <= 9)
	{
		number[i] = 0;
		i++;
	}
}

void	ft_decompose(int val, int *number, int  poss[24][4], int *good)
{
	if (val != 0)
	{
        number[val % 10] = 1;
		val = val - (val % 10);
		val /= 10;
		ft_decompose(val, number, poss, good);
	}
	else
	{
		if (number[1] + number[2] + number[3] + number[4] == 4)
		{
			*good = 1;
			//write (1, "good ", 4);
		}
	}
	//write (1, "loop", 4);
}

void	ft_possfill(int poss[24][4], int val, int *iposs)
{
	int	car;

	car = 3;
	while (car >= 0)
	{
		poss[*iposs][car] = val % 10;
		val -= (val % 10);
		val /= 10;
		car--;
	}
}

void	ft_poss(int poss[24][4])
{
	int	i;
	int val;
	int number[10];
	int iposs;
    int good;

	i = 1234;
	iposs = 0;
	while (i <= 4321)
	{
		//write(1,"loop",4);
		ft_number_zero(number);
        good = 0;
		ft_decompose(i, number, poss, &good);
		//write(1, "pass", 4444);
		if (good == 1)
		{
			ft_possfill(poss, i, &iposs);
			iposs += 1;
		}
		i++;
	}
}

void	ft_posszero(int poss[24][4])
{
	int	x;
	int y;
	
	//printf("in zero");

	y = 0;
	while (y < 25)
	{
		x = 0;
		while (x < 5)
		{
			poss[y][x] = 0;
			x++;
		}
		y++;
	}
}
