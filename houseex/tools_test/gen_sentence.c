#include <stdlib.h>
#include <time.h>

char	*ft_gen_sentence(int len)
{
	char	*dest;
	int	i;

	dest = (char *)malloc(sizeof(char) * len);
	srand(time(NULL));
	i = 0;
	while (i < len - 1)
	{
		dest[i] = (rand() % (126 - 32)) + ' ';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
