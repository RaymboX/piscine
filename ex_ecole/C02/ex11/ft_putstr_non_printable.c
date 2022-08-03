/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 08:10:41 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/31 12:54:37 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_non_printable(char c)
{
	if ((c >= 32) && (c <= 127))
		return (0);
	else
		return (1);
}	

void	ft_print_char(char c)
{
	write (1, &c, 1);
}

void	ft_print_convert_hex(char c)
{
	ft_print_char('\\');
	ft_print_char((c / 16) + '0');
	if ((c % 16) > 9)
		ft_print_char(c % 16 + 87);
	else
		ft_print_char(c % 16 + '0');
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_non_printable(str[i]) == 1)
			ft_print_convert_hex(str[i]);
		else
			ft_print_char(str[i]);
		i++;
	}
}
