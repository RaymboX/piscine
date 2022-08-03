/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:27:17 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/24 08:01:12 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_condition(int *nb, int *x10, int *fd)
{
	char	r;

	r = *nb / *x10;
	if (r != 0)
	{
		*fd = 1;
		ft_putchar(r + '0');
		*nb %= (*x10);
	}
	else if (*fd == 1)
		ft_putchar('0');
	*x10 /= 10;
}

void	ft_putnbr(int nb)
{
	int	fd;
	int	x10;

	if (nb == 0)
		ft_putchar('0');
	else
	{
		x10 = 1000000000;
		if (nb < 0)
		{
			ft_putchar('-');
			x10 *= -1;
		}
		fd = 0;
		while (x10 != 0)
			ft_condition(&nb, &x10, &fd);
	}
}
