/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:32:06 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/26 17:07:42 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	s;
	unsigned int	tf;
	unsigned int	t;

	s = 0;
	t = 0;
	while (str[s] && (t == 0))
	{
		tf = 0;
		while ((str[s] == to_find[tf]) && str[s] && to_find[tf])
		{
			s++;
			tf++;
		}
		if (!to_find[tf])
			t = 1;
		else
			s -= tf;
		s++;
	}
	if (t == 0)
		return (str);
	else
		return (&str[s - tf - 1]);
}
