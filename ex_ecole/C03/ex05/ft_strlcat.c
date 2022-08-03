/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:54:02 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/31 15:45:45 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	dlen;

	d = 0;
	while (dest[d])
		d++;
	dlen = d;
	s = 0;
	while (src[s] && (d < nb - 1) && nb > 0)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	while (src[s])
		s++;
	if (nb > 0)
		dest[d] = '\0';
	if (nb < d)
		return (s + nb);
	else
		return (s + dlen);
}
