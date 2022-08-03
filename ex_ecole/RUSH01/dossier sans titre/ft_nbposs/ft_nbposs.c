/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbposs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 10:05:06 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/29 10:24:58 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_nbposs(int s1, int s2, int *nbcase, int tour, int *nbposs)
{
	if ((*nbcase - tour)  > 0)
		ft_nbposs(s1 + 1, s1 * s2, nbcase, tour + 1, nbposs);
	else
		*nbposs = s2;
}

//a deleter
