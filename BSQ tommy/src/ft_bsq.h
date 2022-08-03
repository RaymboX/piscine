/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Team BSQ                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:11:00 by Tbeaulie          #+#    #+#             */
/*   Updated: 2022/02/07 11:11:00 by Tbeaulie         ###   ###########       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BSQ_H
# define FT_BSQ_H
# include"../lib/ft_lib.h"

typedef struct s_arg
{
	int		status;
	t_uint	type;
	t_uint	nb;
	char	**path;
}				t_arg;

typedef struct s_sol
{
	int	x;
	int	y;
	int	size;
}				t_sol;

typedef struct s_matrix
{
	int		xmax;
	int		ymax;
	char	**m;
	char	empt;
	char	obst;
	char	full;
	t_uint	maxsize;
}				t_matrix;

int			deal_with_error(int error);
t_arg		*deal_with_arg(int argc, char **argv);
t_matrix	*hardcode_matrix(void);
char		*get_a_matrix(t_arg *rock, t_uint item);
t_matrix	*load_a_matrix(t_arg *rock, t_uint type);
void		display_matrix(t_matrix *map);
void		display_mat_dp(t_matrix *map);
void		apply_solution(t_matrix *mat, t_sol sol);
int			find_solution(t_matrix *map);
int			ft_check_file_size(char *path);
char		*get_line(char *c, t_uint *i);
void		destroy_a_matrix(t_matrix *rock);
void		destroy_a_arg(t_arg *rock);
void		init_solution(t_sol *soluce);
int			min(t_matrix *mat, int x, int y);

#endif