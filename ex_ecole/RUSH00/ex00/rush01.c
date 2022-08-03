/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:48:50 by mgagnon           #+#    #+#             */
/*   Updated: 2022/01/23 12:50:25 by mgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	condition(int cx, int cy, int ox, int oy)
{
	if (cx == 1 || cx == ox || cy == 1 || cy == oy)
	{
		if ((cx == 1 && cy == 1) || (cx == ox && cy == oy))
			ft_putchar('/');
		else if ((cx == ox && cy == 1) || (cx == 1 && cy == oy))
			ft_putchar(92);
		else
			ft_putchar('*');
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
