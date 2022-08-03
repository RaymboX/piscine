/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 06:46:57 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/06 13:37:33 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_recur(int nb, int power, long int *result, int i)
{
	if (i < power)
	{
		*result *= (long int)nb;
		ft_recur(nb, power, result, i + 1);
	}
}

int	ft_recursive_power(int nb, int power)
{
	int			i;
	long int	result;

	if (power > 0 && nb)
	{
		i = 1;
		result = (long int)nb;
		ft_recur(nb, power, &result, i);
	}
	else
	{	
		if (power == 0)
			return (1);
		else
			return (0);
	}
	return ((int)result);
}
