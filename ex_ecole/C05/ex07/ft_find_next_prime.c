/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 07:47:25 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/03 08:10:08 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define INTMAX 2147483647

int	ft_div_modulo(int nb, int div)
{
	while ((div < ((nb / 2) + 1)) && ((nb % div) != 0))
		div++;
	if (nb % div == 0)
		return (0);
	else
		return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb > 1)
	{
		if (nb <= 3)
			return (nb);
		else if (ft_div_modulo(nb, 2) == 1)
			return (nb);
		else
		{
			while ((ft_div_modulo(nb, 2) == 0) && (nb < INTMAX))
				nb++;
			if (nb <= INTMAX)
				return (nb);
			else
				return (0);
		}
	}
	return (2);
}
