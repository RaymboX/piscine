/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 06:59:56 by mraymond          #+#    #+#             */
/*   Updated: 2022/02/04 09:50:33 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

#define index_str i[0]
#define index_char i[1]
#define index_tbl i[2]
#define nombre_char_total i[4]
#define i_size i[5]
#define i_count1_write2 i[6]

void    ft_scan_routine(int *i, char **strs, char *tbl, char *sep )
{
    index_tbl = 0;
    nombre_char_total = 0;

    index_str = 0;
    while (i_size > index_str++)
    {
        index_char = 0;
        while (strs[index_str][index_char++])
        {  
            if (i_count1_write2 == 1)
                tbl[index_tbl++] = strs[index_str][index_char];
            nombre_char_total++;
        }
        if (i_count1_write2 == 1)
            tbl[index_tbl++] = *sep;
        nombre_char_total++;
    }
}
    
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tbl;
    int     nbchar;
    int     i[7];
    
    if (size > 0)
    {
        i_size = size;
        i_count1_write2 = 0;
        ft_scan_routine(i, strs, tbl, sep);
        tbl = (char *) malloc(sizeof(char) * nombre_char_total + 1);
        i_count1_write2 = 1;
        ft_scan_routine(i, strs, tbl, sep);
        tbl[index_tbl] = '\0';
        return (tbl);
    }

    return (0);
}
