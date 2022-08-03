#include <stdio.h>

char	*ft_gen_sentence(int len);
char	*ft_strdup(char *src);
void	ft_write_char_memory(char *ptr, int len);
int	ft_char_to_int(char *src);

int	main(int argc, char **argv)
{
	char	*src;
	char	*dest;
	int	len;
	
	if (argc > 1)
		len = ft_char_to_int(argv[1]);
	else
		len = 3;	
	src = ft_gen_sentence(len);
	dest =  ft_strdup(src);
	printf("INPUT : %s\nOUTPUT: %s\n", src, dest);
	printf("Memory check\n");
	ft_write_char_memory(src, len);
	ft_write_char_memory(dest, len);
	
	
	return (0);
}
