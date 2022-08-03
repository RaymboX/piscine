/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:11:59 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/06 13:21:51 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	iword;
	int	ichar;

	iword = argc - 1;
	while (iword > 0)
	{
		ichar = 0;
		while (argv[iword][ichar])
		{
			write (1, &argv[iword][ichar], 1);
			ichar++;
		}
		iword--;
		write (1, "\n", 1);
	}
	return (0);
}
