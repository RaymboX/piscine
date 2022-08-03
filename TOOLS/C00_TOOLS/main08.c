#include <stdio.h>
#include <unistd.h>

void	ft_print_combn(int n);

int main(void)
{
    ft_print_combn(1);
    write (1,"\n",1);
    ft_print_combn(2);
    write (1,"\n",1);
    ft_print_combn(3);
    write (1,"\n",1);
}
