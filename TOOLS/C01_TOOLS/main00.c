#include <stdio.h>

void ft_ft(int *nbr);

int main()
{
    int i;
    
    ft_ft(&i);
    printf("Affecte 42 à la variable en argument de la fonction\nRetour attendu : 42\nRetour fonction: %d", i);
    
}
