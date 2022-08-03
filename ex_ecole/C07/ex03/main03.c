/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 08:47:40 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/04 10:13:30 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char    *ft_strjoin(int size, char **strs, char *sep);

int	main()
{
	char	*str[7] = {"I'm",
						"a",
						"fpv",
						"racing",
						"drone",
						"pilot."};
    char    sep = '-';
	
    printf("%s", ft_strjoin(6, str, &sep));
    
}
					

