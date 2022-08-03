/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:19:59 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/03 13:52:04 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tblint;
	int	i;

	if (min < max)
	{
		tblint = malloc(sizeof(int) * (max - min));
		i = -1;
		while (min + ++i < max)
			tblint[i] = min + i;
		return (tblint);
	}
	else
		return (0);
}
