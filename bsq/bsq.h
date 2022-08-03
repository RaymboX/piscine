#ifndef __BSQ_H__
# define __BSQ_H__

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

//variable define
//int i[16]
#define ALL_INT i
#define SQR_X i[0]
#define SQR_Y i[1]
#define SQR_SIZE i[2]
#define SQRTEST_X i[3]
#define SQRTEST_Y i[4]
#define SQRTEST_SIZE i[5]
#define MAPLIMIT_X i[6]
#define MAPLIMIT_Y i[7]
#define TRACKER_X i[8]
#define TRACKER_Y i[9]
#define OBS_INDEX i[10]
#define OBS_TOTAL i[11]
#define FILE_DESC i[12]
#define FILE_INDEX i[13]
#define FIRSTLINE_COUNT i[14]
#define FILENAME_NUMBER i[15]

//char c[4]
#define ALL_CHAR c
#define MAPCHAR_VIDE c[0]
#define MAPCHAR_OBS c[1]
#define MAPCHAR_SQR c[2]
#define BUFFER c[3]

//prototypes
//ft_conflict.c
int	ft_sqr_in_map(int *ALL_INT);
int	ft_all_obstacle_conflict(int *ALL_INT);
int	ft_obstacle_valid(int *ALL_INT);
int ft_conflict_sqr(int sqrx_n_size, int sqry_n_size, int x, int y);

//ft_file_valid.c
int	ft_file_valid(int *ALL_INT, char *ALL_CHAR, char *filename);
int	ft_map_valid(int *ALL_INT, char *ALL_CHAR);
int	ft_change_line_ckr(int *ALL_INT);
int	ft_mapchar_valid(int *ALL_INT, char *ALL_CHAR);

//ft_find_bigger_sqr.c
void	ft_find_bigger_sqr(int *ALL_INT);
void	ft_sqr_reset(int *ALL_INT);
void	ft_sqrtry_update(int *ALL_INT);
void	ft_sqr_update(int *ALL_INT);

//ft_first_line_valid.c
int	ft_first_line_valid(int *ALL_INT, char *ALL_CHAR, char *filename);
int	ft_maplimity_record(int *ALL_INT, char *ALL_CHAR);
int	ft_mapchar_record(int *ALL_INT, char *ALL_CHAR);
int ft_printable_char(char *ALL_CHAR);
int	ft_firstline_charcount(int *ALL_INT, char *ALL_CHAR, char *filename);

//ft_record_obs.c
int	ft_record_obs(int *ALL_INT, char *ALL_CHAR, char *filename);
void    ft_skip_first_line(int *ALL_INT, char *ALL_CHAR);	
void	ft_char_analyst(int *ALL_INT, char *ALL_CHAR);

//ft_stdin_write.c
void	ft_stdin_write(int *ALL_INT, char *ALL_CHAR, char *filename);
void	ft_instruction();

//ft_write_map.c
void	ft_write_map(int *ALL_INT, char *ALL_CHAR);
void	ft_write_mapchar(int *ALL_INT, char *ALL_CHAR);

//main.c
void	ft_stdin_case(int *ALL_INT, char *ALL_CHAR);
int	ft_map_error(int *ALL_INT, char *ALL_CHAR, char *filename);


#endif
