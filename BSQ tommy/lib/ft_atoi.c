/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbeaulie                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:12:00 by Tbeaulie          #+#    #+#             */
/*   Updated: 2022/01/20 09:21:59 by tbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_lib.h"

int	is_num(char c)
{
	int	num;

	num = 0;
	if (('0' <= c) && (c <= '9'))
		num = 1;
	return (num);
}

int	is_white_space(char c)
{
	int	num;

	num = 0;
	if ((0x00 <= c) && (c <= 0x20))
		num = 1;
	return (num);
}

t_uint	ft_atoi(char *str)
{
	int		i;
	int		flagneg;
	long	res;

	flagneg = 0;
	res = 0;
	i = 0;
	while ((str[i] != 0) && (!is_num(str[i])))
	{
		if (str[i] == '-')
			flagneg = 1;
		i++;
	}
	while (is_num(str[i]))
	{
		res *= 10;
		res = res + (str[i] - 0x30);
		i++;
	}
	return (res);
}

t_uint	ft_atoi_header(char *str)
{
	int		i;
	int		flagneg;
	long	res;
	int		len;

	flagneg = 0;
	res = 0;
	i = 0;
	len = ft_strlen(str);
	if (len < 4)
		return (0);
	while ((str[i] != 0) && (!is_num(str[i])))
	{
		if (str[i] == '-')
			flagneg = 1;
		i++;
	}
	while (is_num(str[i]) && (i < len - 4))
	{
		res *= 10;
		res = res + (str[i] - 0x30);
		i++;
	}
	return (res);
}
