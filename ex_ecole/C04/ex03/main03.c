#include <stdio.h> 
#include <stdlib.h>

int ft_atoi(char *str);

int main()
{
	char	str1a[] = "   --++46--+5-665fg3435fg";
    char    str1b[] = "46--+5-665fg3435fg";
    char    str2a[] = "-----854kgfdkj";
    char    str2b[] = "-854kgfdkj";
	int 	val;

	val = atoi(str1b);
	printf("\nattendu : %d", val);
	val = ft_atoi(str1a);
	printf("\nFonction: %d\n", val);
    val = atoi(str2b);
    printf("\nattendu : %d", val);
    val = ft_atoi(str2a);
    printf("\nFonction: %d\n", val);
}
