/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:26:32 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/06 13:22:06 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(char **tab, int p1)
{
	char	*k;

	k = tab[p1];
	tab[p1] = tab[p1 + 1];
	tab[p1 + 1] = k;
}

int	ft_swap_enabled(char **str, int arg1)
{
	int	i;

	i = 0;
	while ((str[arg1][i] && str[arg1 + 1][i])
			&& (str[arg1][i] == str[arg1 + 1][i]))
		i++;
	if ((str[arg1][i] > str[arg1 + 1][i]))
		return (1);
	else
		return (0);
}

void	ft_sort_str_tab(char **tab, int size)
{
	int	s;
	int	i;

	s = 1;
	while (s != 0)
	{
		s = 0;
		i = 1;
		while (i <= (size - 1))
		{
			if (ft_swap_enabled(tab, i))
			{
				s++;
				ft_swap(tab, i);
			}
			i++;
		}
	}
}

int	ft_print_str(int argc, char **argv)
{
	int	iword;
	int	ichar;

	iword = 1;
	while (iword < argc)
	{
		ichar = 0;
		while (argv[iword][ichar])
		{
			write (1, &argv[iword][ichar], 1);
			ichar++;
		}
		iword++;
		write (1, "\n", 1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_str_tab(argv, argc - 1);
		ft_print_str(argc, argv);
	}
}
