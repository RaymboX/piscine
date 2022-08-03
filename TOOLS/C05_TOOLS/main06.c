/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:25:51 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/02 12:33:49 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

#define INTMIN -2147483648
#define INTMAX 2147483647

int	ft_is_prime(int nb);

int	main()
{
	int	i = 0;
	int	test[] = {0, 1, 2, 5, 12, 101, 223, INTMAX, INTMIN};
	int attendu[] = {0, 0, 1, 1, 0, 1, 1, 1, 0};

	while (i < 9)
	{
		if (i == 7)
            printf("wait...\n");
        
        printf("\ntest %d  input: %d\nattendu : %d\nfonction: %d\n", i + 1, test[i], attendu[i], ft_is_prime(test[i]));
		i++;
	}
}
