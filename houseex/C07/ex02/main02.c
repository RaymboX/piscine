#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main()
{
	int	min[] = {0, 4 , 6, -2147483648};
	int	max[] = {5, 10, 2, 2147483647};
	int	testi = 0;
	int	loop;
	int	*range;
	int	ret;
	
	while (testi < 4)
	{
		ret = ft_ultimate_range(&range, min[testi], max[testi]);
		printf("\nTest %d\nMin: %d\nMax: %d\nResult: %d\nListe: ", testi + 1, min[testi],
			       	max[testi], ret);
		if (ret != -1)
		{
			loop = 0;
			while (min[testi] + loop < max[testi])
			{
				printf("%d ", range[loop]);
				loop++;
			}
		}
		else
			printf("I'm bleeding, making me the victor!");
		testi++;
		printf("\n");
	}
}

