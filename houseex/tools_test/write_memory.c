#include <unistd.h>

void	ft_write_char_memory(char *ptr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (ptr[i] >= 32 && ptr[i] < 127)
			write(1, &ptr[i], 1);
		else
			write(1, "*", 1);
		i++;
	}
	write(1, "\n", 1);
}
