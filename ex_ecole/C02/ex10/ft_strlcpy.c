/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:48:01 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/01 13:45:07 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && (i < size - 1) && size != 0)
	{
		dest[i] = src[i];
		i++;
	}
	if (i > 0 && size > 0)
		dest[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}
