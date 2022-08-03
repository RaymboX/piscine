#include <stdio.h>
#include <string.h>



unsigned int    ft_strlcat(char *dest, char *src, unsigned int nb);

void    ft_clear_dest(char *dest, char *dest2)
{
    int i = 0;
    
    while (i < 11)
    {
        dest[i] = 'a' + i;
        dest2[i] = 'a' + i;
        i++;
    }
    dest[i] = '\0';
    dest2[i] = '\0';
}

int	main()
{
    char    dest[100] ;
    char    dest2[100] ;
    char    src[] = "12345";
    unsigned int    i;
    unsigned int    i2;
    int test = 1;
    int testval[] = {0, 11, 12, 15, 20};
        
    while (test <= 4)
    {
        ft_clear_dest(dest,dest2);
        i2 = strlcat(dest2, src, testval[test - 1]);
        i = ft_strlcat(dest, src, testval[test - 1]);
        printf("\ntest%d  nb = %d\ndest attendu : %s\ndest fonction: %s\nRetour attendu : %d\nRetour fonction: %d", test, testval[test - 1], dest2, dest, i2, i);
        test++;
    }
}	
