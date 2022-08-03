/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:34:38 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/24 15:59:28 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *tab, int p1)
{
	int	k;

	k = tab[p1];
	tab[p1] = tab[p1 + 1];
	tab[p1 + 1] = k;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	s;
	int	i;

	s = 1;
	while (s != 0)
	{
		s = 0;
		i = 0;
		while (i <= (size - 2))
		{
			if (tab[i] > tab[i + 1])
			{
				s++;
				ft_swap(tab, i);
			}
			i++;
		}
	}
}
