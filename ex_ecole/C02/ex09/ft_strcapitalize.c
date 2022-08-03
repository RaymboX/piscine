/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:56:07 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/25 18:12:37 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_jesuisunmot(char *c)
{
	if ((*c >= 'a') && (*c <= 'z'))
		return (1);
	else if ((*c >= 'A') && (*c <= 'Z'))
		return (2);
	else if ((*c >= '0') && (*c <= '9'))
		return (3);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	gap;

	gap = 'a' - 'A';
	i = 0;
	while (str[i] != '\0')
	{
		while ((ft_jesuisunmot(&str[i]) == 0) && (str[i] != '\0'))
			i++;
		if (ft_jesuisunmot(&str[i]) == 1)
			str[i] -= gap;
		i++;
		while ((ft_jesuisunmot(&str[i]) != 0) && (str[i] != '\0'))
		{
			if (ft_jesuisunmot(&str[i]) == 2)
				str[i] += gap;
			i++;
		}
	}
	return (str);
}
