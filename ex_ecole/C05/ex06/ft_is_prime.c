/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:47:54 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/03 07:47:11 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_div_modulo(int nb, int div)
{
	while ((div < ((nb / 2) + 1)) && ((nb % div) != 0))
		div++;
	if (nb % div == 0)
		return (0);
	else
		return (1);
}

int	ft_is_prime(int nb)
{
	if (nb > 1)
	{
		if (nb > 2)
			return (ft_div_modulo(nb, 2));
		else
			return (1);
	}
	else
		return (0);
}
