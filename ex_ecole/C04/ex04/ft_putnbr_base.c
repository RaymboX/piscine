/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 06:53:04 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/01 08:43:43 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_char_filter(char *str)
{
	int	i;
	int	i2;

	i = 0;
	while (str[i])
	{
		i2 = i + 1;
		while (str[i2] && str[i2] != '+' && str[i2] != '-'
			&& str[i2] != str[i])
			i2++;
		if (str[i2] != '\0')
			return (0);
		i++;
	}
	return (1);
}

void	ft_write_base_lnbr(long int lnbr, int baselen, char *base)
{
	if (lnbr != 0)
	{
		ft_write_base_lnbr((lnbr - (lnbr % baselen)) / baselen, baselen, base);
		write (1, &base[lnbr % baselen], 1);
	}	
}	

void	ft_putnbr_base(int nbr, char *base)
{
	int			baselen;
	long int	lnbr;

	lnbr = (long int)nbr;
	baselen = ft_strlen(base);
	if (baselen > 1)
	{
		if (ft_char_filter(base) == 1)
		{
			if (lnbr < 0)
			{
				write (1, "-", 1);
				lnbr *= -1;
			}
			ft_write_base_lnbr(lnbr, baselen, base);
		}
	}
}
