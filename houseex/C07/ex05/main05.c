#include <unistd.h>

char	**ft_split(char *str, char charset);

int	main(void)
{
	int	i[2] = {0, 0};
	char	char1[] = "Bonjour, mon nom est M. RaymboX";
	char	**split;

	split = ft_split(char1, ' ');
	while (split[i[0]] != NULL)
	{
		i[1] = -1;
		while (split[i[0]][++i[1]] != '\0')
			write (1, &split[i[0]][i[1]], 1);
		write (1, "\n", 1);
		i[0]++;
	}
}
