/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:04:51 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/03 15:28:48 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int *tblint;

	if (min < max)
	{
		tblint = malloc(sizeof(int) * (max - min));
		if (tblint == 0)
			return (-1);
		i = -1;
		while (min + ++i < max)
			tblint[i] = min + i;
		*range = tblint;
		return (sizeof(int) * (max - min));
	}
	else
	{	
		*range = 0;
		return (0);
	}
}		
