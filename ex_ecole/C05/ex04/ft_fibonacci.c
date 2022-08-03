/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 07:40:36 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/03 07:43:53 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_loop(int n1, int n2, int index, int *r)
{
	index--;
	if (index > 1)
		ft_loop(n2, n1 + n2, index, r);
	else
		*r = n2 + n1;
}

int	ft_fibonacci(int index)
{
	int	r;

	r = 0;
	if (index > 0)
		ft_loop(0, 1, index, &r);
	if (index >= 0)
		return (r);
	else
		return (-1);
}
