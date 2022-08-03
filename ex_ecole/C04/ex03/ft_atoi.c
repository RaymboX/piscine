/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 07:08:03 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/01 09:01:56 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>

#define INTMIN -2147483648
#define INTMAX 2147483647

int	ft_filter_plus_moins(int *i, char *str, int *nbmin)
{
	if (str[*i] != '\0')
	{
		if (str[*i] == '-')
		{
			*nbmin = *nbmin + 1;
			return (1);
		}
		else if (str[*i] == '+')
			return (2);
	}
	return (0);
}

int	ft_num(int *i, char *str, long int *total)
{
	char	c;

	if (str[*i] != '\0')
	{
		if ((str[*i] >= '0') && (str[*i] <= '9'))
		{
			c = str[*i];
			*total *= 10;
			*total += (long int)(c - '0');
			return (1);
		}
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int			i;
	int			nbmin;
	long int	total;

	i = 0;
	total = 0;
	nbmin = 0;
	while (isspace(str[i]))
		i++;
	while (ft_filter_plus_moins(&i, str, &nbmin))
		i++;
	while (ft_num(&i, str, &total))
		i++;
	if (nbmin % 2 != 0)
		total *= -1;
    return ((int)total);

}
