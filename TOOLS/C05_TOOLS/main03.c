
#include <stdio.h>

#define INTMIN -2147483648
#define INTMAX 2147483647

int	ft_recursive_power(int nb, int power);

int main()
{
    int    inb = 0;
    int ipower = 0;
    int nb[4] = {-5, -10, INTMAX, 0};
    int power[4] = {5, 10, INTMAX, 0};
    int attendu[] = {-3125, -100000, 0, 0, 9765625, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1};
    char    scanfsketuveux[100];
    
	while (ipower < 4)
	{
		inb = 0;
		while (inb < 4)
		{
			printf("\nnb : %d  power: %d\n attendu : %d\n fonction: %d\n",
				   	nb[inb], power[ipower], attendu[ipower * 4 + inb], ft_recursive_power(nb[inb], power[ipower]));
			inb++;
		}
        if (ipower < 3)
        {
            printf("appuyer sur enter pour continuer\n****************************************");
            scanf("%c", scanfsketuveux);
        }
		ipower++;
	}
}	
