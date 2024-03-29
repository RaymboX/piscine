/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:24:39 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/25 16:28:14 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while ((str[i] != '\0') && (str[i] >= ' ') && (str[i] <= 127))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
