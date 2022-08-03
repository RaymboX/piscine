#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb);

int main(void)
{
    ft_putnbr(-2147483648);
    write (1," / ",3);
    ft_putnbr(2147483647);
    write (1," / ",3);
    ft_putnbr(0);
    write (1,"\n",1);
    printf(" -- 1)-2147483648 2)2147483647 3)0 --");
}
