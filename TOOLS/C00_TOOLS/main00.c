#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);

int main (void)
{
    
    ft_putchar('x');
    ft_putchar('I');
    ft_putchar('7');
    write (1,"\n",1);
    printf(" -- Affiche xI7 -- ");
}
