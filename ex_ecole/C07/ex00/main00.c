/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 09:56:51 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/03 13:18:46 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int	main()
{
	char src[] = "ABCDEFGH";
	

	printf("INPUT : %s\nOUTPUT: %s\n", src, ft_strdup(src));
	
}
	

