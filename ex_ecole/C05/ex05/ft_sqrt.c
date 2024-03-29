/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:09:01 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/03 07:45:23 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	long int	i;

	i = 0;
	if (nb > 0)
	{
		while (i * i < (long int)nb)
			i++;
		if (i * i == (long int)nb)
			return (i);
		else
			return (0);
	}
	return (0);
}
