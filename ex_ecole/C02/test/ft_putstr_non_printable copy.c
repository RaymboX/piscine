/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 08:10:41 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/26 09:20:33 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int i;
    char    c2;
    
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 1) && (str[i] <= 31))
        {
            c2 = 92;
            write (1, &c2, 1);
            c2 = (str[i] / 16) + '0';
            write (1, &c2, 1);
            if ((str[i] % 16) > 9)
                c2 = str[i] % 16 + 87;
            else
                c2 = str[i] % 16 + '0';
            write (1, &c2, 1);
        }
		else
            write (1, &str[i], 1);
		i++;
	}
}

