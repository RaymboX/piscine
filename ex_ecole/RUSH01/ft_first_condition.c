/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_condition.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:27:17 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/29 20:35:54 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char **argv)
{
	int	i;

	i = 0;
	while ((argv[1][i] != '\0') && (i <= 31))
    {
		i++;
    }
	return (i);
}

int	ft_num(char **argv)
{
	int	i;

	i = 0;
	while (i != 31)
	{
        if (i % 2 == 0)
        {
            if ((argv[1][i] < '1') && (argv[1][i] > '4'))
                return (0);
        }
        else
        {
            if (argv[1][i] != ' ')
                return (0);
        }
		i++;
	}
	return (1);
}

int ft_first_condition(char **argv)
{
	if (ft_strlen(argv) == 31)
	{
		if (ft_num(argv) == 1)
			return (1);
	}
	return (0);
}
