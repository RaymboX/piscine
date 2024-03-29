/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:45:59 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/31 17:57:00 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] < 'A') || (str[i] > 'z'))
			|| ((str[i] > 'Z') && (str[i] < 'a')))
			return (0);
		i++;
	}
	return (1);
}
