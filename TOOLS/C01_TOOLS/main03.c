#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
    int a = 10;
    int b = 2;
    int divr = a / b;
    int modr = a % b;
    int div;
    int mod;
    
    ft_div_mod(a,b,&div,&mod);
    printf("\nTest1:\nINPUT: a:%d b:%d\nRetour attendu : div:%d mod:%d\nRetour fonction: div:%d mod:%d\n", a, b, divr, modr, div, mod);
    
    b = 3;
    divr = a / b;
    modr = a % b;
    ft_div_mod(a,b,&div,&mod);
    printf("\nTest2:\nINPUT: a:%d b:%d\nRetour attendu : div:%d mod:%d\nRetour fonction: div:%d mod:%d\n ", a, b, divr, modr, div, mod);
        
}
