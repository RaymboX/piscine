/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 08:59:30 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/23 09:34:21 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	cval[3];

	cval[0] = '0';
	cval[1] = '1';
	cval[2] = '2';
	while (cval[0] <= '7')
	{
		while (cval[1] <= '8')
		{
			while (cval[2] <= '9')
			{
				write (1, &cval[0], 3);
				if (cval[0] != '7')
					write (1, ", ", 2);
				cval[2]++;
			}
			cval[1]++;
			cval[2] = cval[1] + 1;
		}
		cval[0]++;
		cval[1] = cval[0] + 1;
		cval[2] = cval[1] + 1;
	}
}
