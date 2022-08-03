/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeaulie <tbeaulie@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 10:44:29 by tbeaulie          #+#    #+#             */
/*   Updated: 2022/01/21 11:18:30 by tbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_lib.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sl;

	i = 0;
	sl = (unsigned int)ft_strlen(src);
	if (size < 1)
		return (sl);
	if (!dest || !src)
		return (size);
	while ((src[i] != 0) && (i < (size - 1)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (sl);
}
