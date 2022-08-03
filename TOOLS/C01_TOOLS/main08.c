#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	main()
{
    int	str[5] = {53, 94, 27, 61};
    
    ft_sort_int_tab(str, 4);
    
    printf("La fonction doit mettre en ordre croissant la chaine de int\nInput: 53 94 27 61 size = 4\nRetour attendu : 27 53 61 94\nRetour fonction: %d %d %d %d", str[0], str[1], str[2], str[3]);
    
}
