/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_poss.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:44:44 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/30 13:06:21 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_row_combine(int posscode[24][2], char **argv, int rowposs[4][10])
{
	int	row;
	int lr[2];
	int	i;
	
	row = 0;
	while (row < 4)
	{
        rowposs[row][0] = 0;
        i = 0;
		while (i < 24)
		{
            
            if ((posscode[i][0] == argv[1][row * 2 + 16] - '0')
					&& (posscode[i][1] == argv[1][row * 2 + 24] - '0'))
			{
				rowposs[row][0] += 1;
				rowposs[row][rowposs[row][0]] = i;
			}
			i++;
		}
		row++;
	}
}


int	ft_test(int *row, int poss[24][4], int rowposs[4][10])
{
	if ((poss[rowposs[0][row[0]]][0] + poss[rowposs[1][row[1]]][0] 
			+ poss[rowposs[2][row[2]]][0] + poss[rowposs[3][row[3]]][0]
			== 10) 
			&& (poss[rowposs[0][row[0]]][1] + poss[rowposs[1][row[1]]][1]
			+ poss[rowposs[2][row[2]]][1] + poss[rowposs[3][row[3]]][1]
			== 10) 
			&& (poss[rowposs[0][row[0]]][2] + poss[rowposs[1][row[1]]][2] 
			+ poss[rowposs[2][row[2]]][2] + poss[rowposs[3][row[3]]][2]
			== 10)
			&& (poss[rowposs[0][row[0]]][3] + poss[rowposs[1][row[1]]][3] 
			+ poss[rowposs[2][row[2]]][3] + poss[rowposs[3][row[3]]][3]
			== 10))
			return (1);
    return (0);
}
			
int	ft_col_match(char **argv, int poss[24][4], int posscode[24][2], int *row, int rowposs[4][10])
{
	int	col;
	int i;
	int passcol[4];

	col = 0;
	while (col < 4)
	{
		i = 0;
		passcol[col] = 0;
		while (i < 24 && passcol[col] == 0)
		{
			if ((argv[1][col * 2] - '0' == posscode[i][0])
				   && (argv[1][col * 2 + 8] - '0' == posscode[i][1]))
			{
				if ((poss[i][0] == poss[rowposs[0][row[0]]][col])
						&& (poss[i][1] == poss[rowposs[1][row[1]]][col])
						&& (poss[i][2] == poss[rowposs[2][row[2]]][col])
						&& (poss[i][3] == poss[rowposs[3][row[3]]][col]))
					passcol[col] = 1;
			}
			i++;
		}
		col++;
	}
	if (passcol[0] + passcol[1] + passcol[2] + passcol[3] == 4)
        return (1);
	else
        return (0);
}


int	ft_gridtest(int poss[24][4], int rowposs[4][10], int *row,char **argv, int posscode[24][2])
{
	row[0] = 1;
	while (row[0] <= rowposs[0][0])
	{
		row[1] = 1;
		while (row[1] <= rowposs[1][0])
		{
			row[2] = 1;
			while (row[2] <= rowposs[2][0])
			{
				row[3]= 1;
				while (row[3] <= rowposs[3][0])
				{
					if (ft_col_match(argv, poss, posscode, row, rowposs))
                        return (1);
					row[3]++;
				}
				row[2]++;
			}
			row[1]++;
		}
		row[0]++;
	}
	return (0);
}
						
void ft_print_grid(int *row, int poss[24][4], int rowposs[4][10])
{
	int	c;
	int x;
	int y;
	
    y = 0;
	while (y < 4)
	{
        x = 0;
		while (x < 4)
		{
            c = (char)poss[rowposs[y][row[y]]][x] + '0';
			write (1, &c, 1);
			x++;
		}
		write (1, "\n", 1);
		y++;
	}
}

			
void	ft_grid_poss(int poss[24][4], char **argv, int posscode[24][2])
{
	int	grid[4][4];
	int	rowposs[4][10];
	int row[4];
	
	//rempli les possibilites des rows avec les index de poss
	ft_row_combine(posscode, argv, rowposs);
	if (ft_gridtest(poss, rowposs, row, argv, posscode) == 1)
		ft_print_grid(row, poss, rowposs);
	else
		write(1, "error\n", 6);
}







		
