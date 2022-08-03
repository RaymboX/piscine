#include <stdio.h>
#include <unistd.h>

void    ft_print_addr_hex(unsigned long int i, int nbdiv)
{
    unsigned long int mod;
    char    prt;
    
    mod = i % 16;
    nbdiv--;
    if (nbdiv >0)
        ft_print_addr_hex((i - mod) / 16, nbdiv);
    if (mod > 9)
        prt = mod + 87;
    else
        prt = mod + '0';
    write (1, &prt, 1);
}

int	main()
{
    int	i = 42;
    void *pi;
    unsigned long int intaddr;
    pi = &i;
    intaddr = (unsigned long int)pi;

	//printf("%lu", add);
    
    ft_print_addr_hex(add,16);
    
}
