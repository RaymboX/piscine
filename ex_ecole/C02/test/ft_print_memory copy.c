/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 07:05:21 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/27 10:51:54 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void    ft_print_char(char c)
{
    write (1, &c, 1);
}

void    ft_print_convert_hex(char c)
{
    char    c2;

    c2 = (c / 16) + '0';
    ft_print_char(c2);
    if ((c % 16) > 9)
        c2 = c % 16 + 87;
    else
        c2 = c % 16 + '0';
    ft_print_char(c2);
}

void    ft_print_addr_hex(unsigned long int i, int nbdiv)
{
    unsigned long int mod;
    char    prt;
    
    mod = i % 16;
    nbdiv--;
    if (nbdiv >0)
        ft_print_addr_hex((i - mod) / 16, nbdiv);
    if (mod > 9)
        prt = mod + 87;
    else
        prt = mod + '0';
    write (1, &prt, 1);
}


void    *ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	t;
	unsigned int	e;
    unsigned long int liaddr;
    char    *str;

    
    str = addr;
    t = 0;
	e = 0;
	while (!e && size)
	{
		// print address
        liaddr = (unsigned long int)str + (9 * t);
        ft_print_addr_hex(liaddr, 16);
		write (1, ":", 2);
        
		// inscription en hexadecimal du contenu
		i = t * 9;
		while (i < (9 + (t * 9)))
		{
			if ((i - (t * 9)) % 2 == 0)
				ft_print_char(' ');
			if (str[i] == '\0')
                e++;
			if (!e)
                ft_print_convert_hex(str[i]);
			else
				ft_print_char(' ');
			i++;
		}
        ft_print_char(' ');
		// inscription du text
		i = (t * 9);
		while ((i < (9 + (t * 9))) && str[i])
		{
			if ((str[i] >= 32) && (str[i] <= 127))
				ft_print_char(str[i]);
			else
				ft_print_char('.');
			i++;
		}
		write (1, "\n", 1);
		t++;
	}
    return (0);
}
