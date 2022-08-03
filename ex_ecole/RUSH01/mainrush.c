/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainrush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:18:17 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/29 20:45:36 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

void ft_number_zero(int *number);
void    ft_decompose(int val, int *number, int  poss[24][4], int *good);
void    ft_possfill(int poss[24][4], int val, int *iposs);
void    ft_poss(int poss[24][4]);
void    ft_posszero(int poss[24][4]);
int    ft_strlen(char **argv);
int    ft_num(char **argv);
int ft_first_condition(char **argv);
int    ft_up_count(int comb[3], int p0m1, int i);
void    ft_posscode(int poss[24][4], int posscode[24][2]);
void    ft_row_combine(int posscode[24][2], int **argv, int rowposs[4][10]);
int    ft_test(int *row, int poss[24][4], int rowposs[4][10]);
int    ft_gridtest(int poss[24][4], int rowposs[4][10], int *row);
void    ft_print_grid(int *row, int poss[24][4], int rowposs[4][10]);
void    ft_grid_poss(int poss[24][4], char **argv, int posscode[24][2]);

int	main(int argc, char **argv)
{
	int poss[24][4];
	int posscode[24][2];
	
    if (argc == 2)
    {
        if (ft_first_condition(argv) == 1)
        {
            ft_posszero(poss);
            ft_poss(poss);
            ft_posscode(poss, posscode);
            ft_grid_poss(poss, argv, posscode);
        }
        else
            write (1, "error\n", 6);
    }
    else
        write (1, "error\n", 6);
    return (0);
}
