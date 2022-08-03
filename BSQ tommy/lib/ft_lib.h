/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Team Rush02                                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 05:59:00 by Tbeaulie          #+#    #+#             */
/*   Updated: 2022/01/20 05:59:00 by Tbeaulie         ###   ###########       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_LIB_H
# define FT_LIB_H

typedef unsigned int	t_uint;

char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		is_num(char c);
t_uint	ft_atoi(char *str);
t_uint	ft_atoi_header(char *str);
int		ft_power(int nb, int power);
char	*ft_strcpy(char *dest, char *src);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
t_uint	ft_strlcpy(char *dest, char *src, unsigned int size);
void	init_var2(t_uint *a, t_uint *b);
void	init_var3(t_uint *a, t_uint *b, t_uint *c);
void	init_var4(t_uint *a, t_uint *b, t_uint *c, t_uint *d);

#endif