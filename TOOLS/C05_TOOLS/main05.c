/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:15:02 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/02 09:21:38 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

#define INTMIN -2147483648
#define INTMAX 2147483647

int ft_sqrt(int nb);

int main()
{
	int	i = 0;
	int testval[] = {0, 1, 16, 81, 143, INTMAX, INTMIN};
	int attendu[] = {0, 1, 4, 9, 0, 0, 0};
	
	while (i < 7)
	{
		printf("\ntest %d  input: %d\nattendu : %d\nfonction: %d\n",
			   	i+1, testval[i], attendu[i], ft_sqrt(testval[i]));
		i++;
	}
}


