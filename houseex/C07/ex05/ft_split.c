#include <stdlib.h>

int	ft_nbword(char *str, char charset);
char	*ft_word(int word, char *str, char charset, int *iw_start_end);
void	ft_strncpy_range(char *src, int start, int end, char *dest);	

char	**ft_split(char *str, char charset)
{
	char	**split;
	int	nbword;
	int	iword;
	int	iwse[2];

	if ((nbword = ft_nbword(str, charset)) > 0)
	{
		split = (char**)malloc(sizeof(char*) * (nbword + 1));
		iword = -1;
		while (++iword < nbword)
		{
			split[iword] = ft_word(iword, str, charset, iwse);
			ft_strncpy_range(str, iwse[0], iwse[1], split[iword]);	
		}
		split[iword] = NULL;
		return (split);
	}
	else
		return (NULL);
}

int	ft_nbword(char *str, char charset)
{
	int	i;
	int	nbword;
	char	lastchar;

	nbword = 0;
	i = -1;
	lastchar = '\0';
	while (str[++i] != '\0')
	{
		if (str[i] == charset && lastchar != charset)
			nbword += 1;
		lastchar = str[i];
	}	
	if (lastchar != charset)
		nbword += 1;
	return (nbword);
}

char	*ft_word(int word, char *str, char charset, int *iw_start_end)
{
	int	i[2];
	int	iword;
	
	iword = 0;
	i[0] = 0;
	while (iword != word)
	{
		if (str[i[0]] == charset)
			iword += 1;
		i[0]++;
	}
	i[1] = i[0];
	while (str[i[1]] != charset && str[i[1]] != '\0')
		i[1]++;
	iw_start_end[0] = i[0];
	iw_start_end[1] = i[1];
	return ((char*)malloc(sizeof(char) * (i[1] - i[0] + 1)));
}

void	ft_strncpy_range(char *src, int start, int end, char *dest)	
{
	int	i;

	i = -1;
	while (++i + start < end)
		dest[i] = src[i + start];
	dest[i] = '\0';
}
