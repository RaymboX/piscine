#include <stdio.h>
#include <unistd.h>

void ft_is_negative(int n);

int	main()
{
    ft_is_negative(-15);
    ft_is_negative(0);
    ft_is_negative(15);
    write (1,"\n",1);
    printf(" -- 1:-15 2:0 3:15 / rep:NPP");
}
