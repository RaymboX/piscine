#include <stdio.h>
#include <string.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb);

int    main()
{
    char    dest[100] = "Bonjour qui:----------------";
    char    dest2[100] = "Bonjour qui:----------------";
    char    src[] = " a toi!";
    
    dest[12] = '\0';
    dest2[12] = '\0';
    printf("Retour attendu : %s\nRetour fonction: %s", strncat(dest2, src, 4), ft_strncat(dest, src, 4));
}
