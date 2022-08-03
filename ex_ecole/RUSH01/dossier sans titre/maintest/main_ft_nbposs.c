#include <stdio.h>

int main()
{
    int nbposs;
    int nbcase;
    
    nbcase = 4;
    nbposs = 0;
    ft_nbposs(1,1,&nbcase,0,&nbposs);

    printf("\n%d\n", nbposs);
}
