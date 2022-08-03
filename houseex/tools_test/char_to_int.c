int	ft_char_to_int(char *src)
{
	int	i;
	int	number;

	i = (number = 0);
	while (src[i])
	{
		if (src[i] < '0' || src[i] > '9')
			return (number);
		number *= 10;
		number += src[i] - '0';
		i++;
	}
	return (number);
}
