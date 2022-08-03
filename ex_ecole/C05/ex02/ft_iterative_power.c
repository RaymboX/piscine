/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:44:30 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/03 07:38:48 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define INTMIN -2147483648
#define INTMAX 2147483647

void	ft_iteration(int nb, int power, long int *result)
{
	int	i;

	i = 1;
	while (i < power && *result <= INTMAX)
	{
		if (*result * (long int)nb <= INTMAX)
			*result *= (long int)nb;
		else
			*result = (long int)INTMAX + 1;
		i++;
	}
}

int	ft_iterative_power(int nb, int power)
{
	long int	result;

	result = (long int)nb;
	if (power > 0 && nb)
	{
		ft_iteration(nb, power, &result);
	}
	else
	{	
		if (power == 0)
			return (1);
		else
			return (0);
	}
	if (result > INTMAX || result < INTMIN)
		return (0);
	else
		return ((int)result);
}
