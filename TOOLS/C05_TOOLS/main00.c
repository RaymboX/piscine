/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 08:54:55 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/01 10:35:37 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

#define INTMIN -2147483648
#define INTMAX 2147483647

int ft_iterative_factorial(int nb);

int main()
{
    int test = 0;
    int testval[] = {4, 10, 100, 0, -3, INTMAX, INTMIN};
    int attendu[] = {24 , 3628800, 0, 1, 0, 0, 0};
    
    while (test < 7)
    {
        printf("\ntest %d  input: %d\nAttendu : %d\nFonction: %d\n", test + 1, testval[test], attendu[test], ft_iterative_factorial(testval[test]));
        test++;
    }
}
