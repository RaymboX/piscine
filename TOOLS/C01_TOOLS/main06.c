#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main()
{
	char	str[12] = "Bonjour toi";
    
    printf("Fonction doit retourner la longueur de la chaine de caracteres\nInput: %s\nRetour attendu : %lu\nRetour fonction: %d\n", str, strlen(str), ft_strlen(str));
    
}
