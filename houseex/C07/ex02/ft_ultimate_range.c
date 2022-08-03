#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int 	i;
	int	*tbli;
	
	i = 0;
	if (min >=  max)
	{
		tbli = 0;
		return (0);
	}
	tbli = (int *)malloc(sizeof(int) * (max - min));
	if (tbli == NULL)
		return (-1);
	while (min + i < max)
	{
		tbli[i] = min + i;
		i++;
	}
	*range = tbli;
	return (max - min);
}
