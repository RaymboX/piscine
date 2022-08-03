/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 07:21:02 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/01 08:38:37 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main()
{
	int	nbr[] = {12345678, -67890};
	char	base[5][17] = {"0123456789", "01", "0123456789abcdef", "RaymboX!"}; 
	char	attendu[9][25] = {"12345678", "101111000110000101001110", "bc614e", "o!RXRoaX", "-67890", "-10000100100110010", "-10932", "-yRbbXy"};
	char	inputsketuveux;	
	int	inbr;
	int ibase;
	
	inbr = 0;
	while (inbr < 2)
	{
		ibase = 0;
		printf("***************************************************");
		while (ibase < 4)
		{
			printf("\n\ntest nbr: %d  base: %s\n%s <--attendu:\n <--Fonction:",
				   	nbr[inbr], base[ibase], attendu[inbr * 4 + ibase]);	
			ft_putnbr_base(nbr[inbr], base[ibase]);
			ibase++;
		}
		printf("\nAppuyer enter pour continuer\n");
		scanf("%c", &inputsketuveux);
		inbr++;
	}
	printf("***************************************************");
}
