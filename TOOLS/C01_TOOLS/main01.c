#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main()
{
    int i;
    int *i1;
    int **i2;
    int ***i3;
    int ****i4;
    int *****i5;
    int ******i6;
    int *******i7;
    int ********i8;
    int *********i9;
    
    i1 = &i;
    i2 = &i1;
    i3 = &i2;
    i4 = &i3;
    i5 = &i4;
    i6 = &i5;
    i7 = &i6;
    i8 = &i7;
    i9 = &i8;
    
    ft_ultimate_ft(i9);
    printf("Affecte 42 à la variable en argument de la fonction avec pointeur sur pointeur *****...\nRetour attendu : 42\nRetour fonction: %d", i);
}
