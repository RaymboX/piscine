/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tmp_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 13:07:36 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/29 14:20:12 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tmp_zero(int **tmp)
{
	int	x;
	int y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			tmp[y][x] = 0;
			x++;
		}
		y++;
	}
}

void	ft_tmp_fill(int **poss, int **codeposs, int gauche, int droite, int  **tmp, )
{
	int	i;
	int car;

	ft_tmp_zero(tmp);
	i = 0;
	while (i < 24)
	{
		if ((gauche == codeposs[i][0]) && (droite == codeposs[i][0]))
		{
			car = 0;
			while (car < 4)
			{
				tmp[car][poss[i][car] - 1] = 1;
				car++;
			}
		}
		i++;
	}
