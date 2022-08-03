/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 07:08:03 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/28 12:29:38 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

int	ft_num(int *i, char *str, int *total)
{
	char	c;

	if (str[*i] != '\0')
	{
		if ((str[*i] >= '0') && (str[*i] <= '9'))
		{
			c = str[*i];
			*total *= 10;
			*total += (int)(c - '0');
			return (1);
		}
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbmin;
	int	total;

	i = 0;
	total = 0;
	nbmin = 0;
	while (str[i] == ' ')
		i++;
	while (ft_filter_plus_moins(&i, str, &nbmin))
		i++;
	while (ft_num(&i, str, &total))
		i++;
	if (nbmin % 2 != 0)
		total *= -1;
	return (total);
}
