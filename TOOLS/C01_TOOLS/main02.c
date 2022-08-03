#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
    int a = 2;
    int b = 4;
    
    printf("INPUT : a:%d b:%d\nSWAP les valeurs, retour inversé\nRETOUR ATTENDU : a:%d b:%d\n", a, b, b, a);
    ft_swap(&a, &b);
    printf("RETOUR fonction: a:%d b:%d", a, b);
}
