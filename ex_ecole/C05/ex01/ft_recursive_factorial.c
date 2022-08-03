/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:36:11 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/06 13:36:58 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_factmoica(int i, int nb, long int *total)
{
	if (i < nb)
	{
		*total *= (long int)(i + 1);
		ft_factmoica(i + 1, nb, total);
	}
}

int	ft_recursive_factorial(int nb)
{
	int			i;
	long int	total;

	i = 0;
	total = 1;
	ft_factmoica(i, nb, &total);
	if (nb < 0)
		return (0);
	else
		return ((int)total);
}
