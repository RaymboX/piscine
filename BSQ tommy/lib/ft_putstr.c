/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbeaulie                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 05:59:00 by Tbeaulie          #+#    #+#             */
/*   Updated: 2022/01/20 05:59:00 by Tbeaulie         ###   ###########       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include"ft_lib.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	write(1, str, i);
}
