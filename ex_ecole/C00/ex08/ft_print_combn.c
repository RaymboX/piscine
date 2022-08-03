/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 08:59:30 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/23 14:09:34 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	increment(char *c, int *n)
{
	int	i;

	i = *n - 1;
	c[i]++;
	if (c[i] > (10 - (*n - i) + '0'))
	{
		while ((c[i] > (10 - (*n - i) + '0')) && (i >= 0))
		{
			i--;
			c[i]++;
		}
		if (i >= 0)
		{
			i++;
			while (i != *n)
			{
				c[i] = c[i - 1] + 1;
				i++;
			}
		}
	}
}

void	ft_print_combn(int n)
{
	char	c[10];
	int		i;

	i = 0;
	while (i < n)
	{
		c[i] = i + '0';
		i++;
	}
	while (c[0] <= ((10 - n) + '0'))
	{
		write (1, &c, n);
		increment(c, &n);
		if (c[0] <= (10 - n) + '0')
			write (1, ", ", 2);
	}
}
