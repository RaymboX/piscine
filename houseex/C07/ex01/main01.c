#include <stdio.h>

int	*ft_range(int min, int max);

int	main ()
{
	int	min[] = {0, 4 , 6};
	int	max[] = {5, 10, 2};
	int	testi = 0;
	int	*tbli;
	int	loop;

	while (testi < 3)
	{
		printf("\nTest %d\nMin: %d\nMax: %d\nResult: ", testi + 1, min[testi], max[testi]);
		tbli = ft_range(min[testi], max[testi]);
		loop = 0;
		while (min[testi] + loop < max[testi])
		{
			printf("%d ", tbli[loop]);
			loop++;
		}
		testi++;
		printf("\n");
	}
}

