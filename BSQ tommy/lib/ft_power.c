/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbeaulie                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:22:05 by Tbeaulie          #+#    #+#             */
/*   Updated: 2022/01/31 20:22:05 by Tbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_lib.h"

int	ft_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
