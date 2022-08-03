#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main()
{
	int	str[5] = {21,54,67,34,76};
    
    ft_rev_int_tab(str, 5);
    
    printf("Fonction doit retourner l'ordre inverse de la chaine de int\nInput: tab: 21 54 67 34 76  size: 5\nRetour attendu : 76 34 67 54 21\nRetour fonction: %d %d %d %d %d\n", str[0], str[1],str[2],str[3],str[4]);
}
