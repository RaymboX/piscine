/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_possfill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 10:33:03 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/29 11:55:10 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	 *g_poss;

void	ft_possfill(int nbposs, int nbcase)
{

	g_poss = malloc(4 * nbposs * nbcase);
	
	

}

int main()
{
	ft_possfill(24, 4);
}
