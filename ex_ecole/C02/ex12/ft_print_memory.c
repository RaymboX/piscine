/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 07:05:21 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/31 12:55:17 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_convert_hex(char c)
{
	char	c2;

	c2 = (c / 16) + '0';
	write (1, &c2, 1);
	if ((c % 16) > 9)
		c2 = c % 16 + 87;
	else
		c2 = c % 16 + '0';
	write (1, &c2, 1);
}

void	ft_print_addr_hex(unsigned long int i, int nbdiv)
{
	unsigned long int	mod;
	char				prt;

	mod = i % 16;
	nbdiv--;
	if (nbdiv > 0)
		ft_print_addr_hex((i - mod) / 16, nbdiv);
	if (mod > 9)
		prt = mod + 87;
	else
		prt = mod + '0';
	write (1, &prt, 1);
}

void	ft_txt_to_hex(int limit, char *str, unsigned int *e)
{
	int	i;

	i = limit;
	while (i < (16 + limit))
	{
		if ((i - limit) % 2 == 0 && i > limit)
			write (1, " ", 1);
		if (str[i] == '\0')
			*e = 1;
		if (!*e)
			ft_print_convert_hex(str[i]);
		else
			write (1, " ", 1);
		i++;
	}
	write (1, " ", 1);
}

void	ft_print_txt(int limit, char *str)
{
	int	i;

	i = limit;
	while ((i < (16 + limit)) && str[i])
	{
		if ((str[i] >= 32) && (str[i] <= 127))
			write (1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		t;
	unsigned int		e;
	unsigned long int	liaddr;
	char				*str;

	str = addr;
	t = 0;
	e = 0;
	while (!e && size)
	{
		liaddr = (unsigned long int)str + (16 * t);
		ft_print_addr_hex(liaddr, 16);
		write (1, " :", 2);
		ft_txt_to_hex(t * 16, str, &e);
		ft_print_txt(t * 16, str);
		write (1, "\n", 1);
		t++;
	}
	return (0);
}
