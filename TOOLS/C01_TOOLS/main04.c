#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
    int a = 10;
    int b = 2;
    int ar = a;
    int br = b;
    
    ft_ultimate_div_mod(&a, &b);
    printf("Test1:\nInput: a:%d b:%d\n**Fonction fait: a = a / b  b = a modulo b**\nRetour attendu : a:%d b:%d\nRetour fonction: a:%d b:%d\n\n", ar, br, ar/br, ar % br, a, b);
    
    a = 10;
    b = 3;
    ar = a;
    br = b;
    ft_ultimate_div_mod(&a, &b);
    printf("Test2:\nInput: a:%d b:%d\n**Fonction fait: a = a / b  b = a modulo b**\nRetour attendu : a:%d b:%d\nRetour fonction: a:%d b:%d", ar, br, ar/br, ar % br, a, b);
}
