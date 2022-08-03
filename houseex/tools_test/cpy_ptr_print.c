#include <stdio.h>

void	ft_cpy_ptr(char *dest);

int	main()
{
	char *dest;
	ft_cpy_ptr(dest);
	printf("%s\n", dest);
}

void	ft_cpy_ptr(char *dest)
{
	char
		src[] = "Passe moi ca";

	*dest = src;
}
