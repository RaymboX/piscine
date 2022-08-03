#include <stdio.h>

#define INTMIN -2147483648
#define INTMAX 2147483647

int ft_find_next_prime(int nb);

int	main()
{
	int	i = 0;
	int	test[] = {0, 1, 2, 5, 12, 101, 222, INTMAX - 1, INTMIN};
	int attendu[] = {2, 2, 2, 5, 13, 101, 223, INTMAX, 2};

	while (i < 9)
	{
		if (i == 7)
            printf("wait...\n");
        
        printf("\ntest %d  input: %d\nattendu : %d\nfonction: %d\n", i + 1, test[i], attendu[i], ft_find_next_prime(test[i]));
		i++;
	}
}
