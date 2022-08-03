#include <stdlib.h>

int	ft_strlen(char *src);
void	ft_strcpy(char *src, char *dest);

char	*ft_strdup(char *src)
{
	char	*dest;
	
	dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	ft_strcpy(src, dest); 
	return (dest);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
}

void	ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
