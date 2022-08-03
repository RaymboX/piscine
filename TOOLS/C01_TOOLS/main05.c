#include <stdio.h>

void	ft_putstr(char *str);

int	main()
{
	char	str[12] = "Bonjour toi";
    
    printf("Fonction doit retourner la chaine de str\nInput : %s\n---Output: ", str);
	ft_putstr(str);
}
