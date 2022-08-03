#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void);

int main()
{
    ft_print_numbers();
    write (1,"\n",1);
    printf(" -- imprime chiffre de 0 à 9 --");
}
