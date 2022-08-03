/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:32:06 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/01 15:22:56 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i[3];

	i[0] = 0;
	i[2] = 0;
	if (!str[0] && !to_find[0])
		return (&str[0]);
	while (str[i[0]] && (i[2] == 0))
	{
		i[1] = 0;
		while ((str[i[0]] == to_find[i[1]]) && str[i[0]] && to_find[i[1]])
		{
			i[0]++;
			i[1]++;
		}
		if (!to_find[i[1]])
			i[2] = 1;
		else
			i[0] -= i[1];
		i[0]++;
	}
	if (i[2] == 0)
		return (0);
	else
		return (&str[i[0] - i[1] - 1]);
}
