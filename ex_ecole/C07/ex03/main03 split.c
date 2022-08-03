/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 07:36:00 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/04 08:47:27 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>


void ft_word_len(char *str, int *i_start, char sep, int *end)
{
	*len = *i_start + 1;

	while (str[*len] != sep)
		*len++;
	while (
}


int	main()
{
	char	**strs[];
	char	phrase[] = "I'm a fpv racing drone pilot.";
	int		nbword = 6;
	int		i[3] = {0, 0, 0};
	int		len = 0;

	strs = (char *)malloc(sizeof(char) * 6 + 1);
	str[6] = '\0';
	while (i[0]++ < 7)
	{
		ft_word_len(phrase, i[3], ' ', len); 
		
		while (phrase[i[3]++] != ' ') 
			
			strs[i[0]]

	


