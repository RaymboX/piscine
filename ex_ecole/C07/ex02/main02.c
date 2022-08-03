/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:26:07 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/03 15:28:52 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int main()
{
	int min[] = {-5, -10, 0, 1};
	int max[] = {5, -5, -5, 1};
	int	*tblint;
	int **range = &tblint;
	int	test = -1;
	int i;
	
	while (++test < 4)
	{
		printf("\n\nMIN: %d  MAX: %d  RANGE: %d", min[test], max[test], ft_ultimate_range(range, min[test], max[test]));
		i = -1;
		printf("%p\nList: ", tblint);
		
		while (min[test] + ++i < max[test])
			printf("%d ", tblint[i]);
	}
}
