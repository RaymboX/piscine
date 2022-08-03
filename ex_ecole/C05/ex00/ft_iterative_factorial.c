/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 08:41:17 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/03 07:26:15 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define INTMIN -2147483648
#define INTMAX 2147483647

int	ft_iterative_factorial(int nb)
{
	int			i;
	long int	total;

	i = 0;
	total = 1;
	while (i < nb && total <= INTMAX)
	{
		if (total * (long int)(i + 1) <= INTMAX
				&& total * (long int)(i + 1) >= INTMIN)
		{
			total = ((long int)i + 1) * (total);
			i++;
		}
		else
			total = (long int)INTMAX + 1;
	}
	if (total > INTMAX || total < INTMIN || nb < 0)
		return (0);
	else
		return ((int)total);
}
