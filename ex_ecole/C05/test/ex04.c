#include <stdio.h>

void ft_loop(int n1, int n2, int index, int *r)
{
    index--;
    if (index > 1)
        ft_loop(n2, n1 + n2, index, r);
    else
        *r =(n1 + n2);
}


int ft_fibonachi(int index)
{
    int r;
    
    r = 0;
    if (index > 0)
        ft_loop(0, 1, index, &r);
    return (r);
}

int main()
{
    int i;
    
    i = 0;
    while (i < 20)
    {
        printf("%d - %d \\ ",i,ft_fibonachi(i));
        i++;
    }
    return (0);
}
