#include <stdio.h>

void	ft_putstr(char *str);

int	main()
{
	char	str[12] = "Bonjour toi";
    
    printf("Fonction doit retourner la chaine de str\nInput :\n%s\nOutput:\n", str);
	ft_putstr(str);
}
