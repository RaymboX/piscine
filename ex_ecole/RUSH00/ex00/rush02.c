/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:41:34 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/23 12:55:39 by mgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	condition(int cx, int cy, int ox, int oy)
{
	if (cx == 1 || cx == ox || cy == 1 || cy == oy)
	{
		if ((cx == 1 && cy == 1) || (cx == ox && cy == 1))
			ft_putchar('A');
		else if ((cx == 1 && cy == oy) || (cx == ox && cy == oy))
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i[2];

	if (x >= 1 && y >= 1)
	{
		i[1] = 1;
		while (i[1] <= y)
		{
			i[0] = 1;
			while (i[0] <= x)
			{
				condition(i[0], i[1], x, y);
				i[0]++;
			}
			write (1, "\n", 1);
			i[1]++;
		}
	}
	else
		write (1, "Good try", 8);
}
