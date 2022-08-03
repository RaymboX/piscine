#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int 	i;
	int	*tbli;
	
	i = 0;
	if (min >=  max)
		return (0);
	tbli = (int *)malloc(sizeof(int) * (max - min));
	while (min + i < max)
	{
		tbli[i] = min + i;
		i++;
	}
	return (tbli);
}
