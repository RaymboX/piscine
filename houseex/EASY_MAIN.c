#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INTMAX 2147483647
#define INTMIN -2147483648

void	ft_int_gen(int *num, int *test);
void	ft_char_p_gen(char *c, int *test);
void	ft_char_np_gen(char *c, int *test);
void	ft_string_p_gen(char *src, int *test);
void	ft_string_np_gen(char *src, int *test);
void	ft_print_memory(char *src, int slen);
int	ft_strlen(char *src);
char	*ft_str_compare(char *src1, char *src2, int len);

int	main(int argc, char **argv)
{
	//int	*num;
	//int	*pnum;
	//char	*c;
	//char	*src;
	//char	*src2;
	//char	*dest;
	//char	*dest2;
	int	test;
	int	nbtest;
	int	slen;
	
	(void)argc;
	(void)argv;

	//description de fonction-------------------
	printf("Description de fonction\n");
	
	nbtest = X;
	test = 0;
	while (test < nbtest)
	{
		printf("Test %d\n", test);
		
		//TEST HERE --------------------------

		//printf("INPUT : ");
		
		
		//printf("OUTPUT: ");
		

		//-----------------------------------
		
		//string compare result --------------
		//printf("%s\n", ft_str_compare(src, dest, -1)	
		
		//MEMORY PRINT------------------
		//printf("print memory\n");
		//ft_print_memory(src, -1);

		test++;
	}
	


}

void	ft_int_gen(int *num, int *test)
{
	switch (*test)
	{
		case 0:
			*num = 5;
			break;			
		case 1;
			*num = INTMAX;
			break;
		case 2;
			*num = INTMIN;
			break;
		case 3;
			*num = 0;
			break;
	}
}

void	ft_char_p_gen(char *c, int *test)
{
	switch (*test)
	{
		case 0:
			*c = 'a';
			break;			
		case 1;
			*num = 'A';
			break;
		case 2;
			*num = '_';
			break;
		case 3;
			*num = '?';
			break;
	}
}

void	ft_char_np_gen(char *c, int *test)
{
	switch (*test)
	{
		case 0:
			*c = '\t';
			break;			
		case 1;
			*num = '\n';
			break;
		case 2;
			*num = '\0';
			break;
		case 3;
			*num = 127;
			break;
	}
}

void	ft_string_p_gen(char *src, int *test)
{
	char s0[] = "Bonjour";
	char s1[] = "M.RaymboX is here!";
	char s2[] = "MAJUSCULE";
	char s3[] = "minuscule";
	char s4[] = "1234";
	char s5[] = "Lettre1234";
	char s6[] = "LeTtre et Chiffre 702, + symb *&^%$-_";

	switch (*test)
	{
		case 0:
			src = s0;
			break;			
		case 1;
			src = s1;
			break;
		case 2;
			src = s2;
			break;
		case 3;
			src = s3;
			break;
		case 4;
			src = s4;
			break;
		case 5;
			src = s5;
			break;
		case 6;
			src = s6;
			break;
	}
}

void	ft_string_np_gen(char *src, int *test)
{
	char s0[] = "Bon\tjour";
	char s1[] = {5, 12, 31, 25, 0};
	char s2[] = {127, 127, 127, 0};

	switch (*test)
	{
		case 0:
			src = s0;
			break;			
		case 1;
			src = s1;
			break;
		case 2;
			src = s2;
			break;
	}
}

void	ft_print_memory(char *src, int slen)
{
	int	i = 0;
	
	if (slen < 0)
		slen = ft_strlen(src);

	while (i < slen)
	{
		if (src[i] >= 32 && src[i] <= 126)
			write(1, &src[i], 1);
		else
			write(1, "@", 1);
	}
	write(1, '\n', 1);
}

int	ft_strlen(char *src)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_str_compare(char *src1, char *src2, int len)
{
	int	i = 0;
	char	pass[] = "string compare PASS";
	char	fail[] = "string compare fail";

	if (len < 0)
		len = ft_strlen(src1);

	while (i < len)
	{
		if (src1[i] != src2[i])
			return (fail);
		i++;
	}
	return (pass);
}

