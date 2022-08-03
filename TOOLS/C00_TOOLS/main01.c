# include <stdio.h>
#include <unistd.h>

void ft_print_alphabet(void);

int main ()
{
    
    ft_print_alphabet();
    write (1,"\n",1);
    printf(" -- Imprime l'alphabet ordre croissant minuscule -- ");
}
