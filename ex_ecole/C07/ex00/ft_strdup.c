/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 09:53:59 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/03 13:18:43 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	ptr = malloc(sizeof(src));
	i = -1;
	while (++i <= sizeof(src))
		ptr[i] = src[i];
	return (ptr);
}
