/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_posscode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:29:03 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/29 18:01:43 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_up_count(int poss[24][4], int p0m1, int *i)
{
	int car;
	int up;
	int val;

	if (p0m1 == 0)
		car = 0;
	else
		car = 3;
	up = 0;
	val = 0;
	while (((p0m1 == 0) && (car < 4)) || ((p0m1 == 1) && (car >= 0)))
	{
		if (poss[*i][car] > val)
		{
			up++;
			val = poss[*i][car];
		}
		if (p0m1 == 0)
			car += 1;
		else
			car -= 1;
	}		
	return (up);
}

void	ft_posscode(int poss[24][4], int posscode[24][2])
{
	int	i;

	i = 0;
	while (i < 24)
	{
		posscode[i][0] = ft_up_count(poss, 0, &i);
		posscode[i][1] = ft_up_count(poss, 1, &i);
		i++;
	}
}	 				
