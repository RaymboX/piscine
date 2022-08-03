/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_assign.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 13:04:03 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/29 14:58:28 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_grid_assign(int	***grid, int **tmp, int c0r1, int cr)
{
	int car;
	int gx;
	int gy;
	
	
	if (c0r1 == 0)
		gx = cr;
	else
		gy = cr;
	while (cases < 4)
	{
		car = 0;
		while (car < 4)
		{
			if ((c0r1 == 0) && (tmp[cases][car] = 1)
				grid[gx][gy][car] = 1;
			else if
