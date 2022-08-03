#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INTMAX 2147483647
#define INTMIN -2147483648

void	ft_int_gen(int *num, int test);
void	ft_char_p_gen(char *c, int test);
void	ft_char_np_gen(char *c, int test);
char	*ft_string_p_gen(int test);
void	ft_string_np_gen(char *src, int test);
void	ft_print_memory(char *src, int slen);
int	ft_string_len(char *src);
void	ft_string_compare(char *src1, char *src2, int len);
void	ft_string_copy(char *src1, char *src2);


char	*ft_strdup(char *src);

int	main(int argc, char **argv)
{
	//int	*num;
	//int	*pnum;
	char	*c;
	char	*src;
	//char	*src2;
	char	*dest;
	//char	*dest2;
	char	*reponse;
	int	test;
	int	nbtest;
	int	slen;
	
	(void)argc;
	(void)argv;

	//description de fonction-------------------
	printf("Description de fonction\n");
	
	nbtest = 7;
	test = 0;
	while (test < nbtest)
	{
		printf("\nTest %d\n", test);
		
		//TEST HERE --------------------------
		
		src = ft_string_p_gen(test);
		dest = ft_strdup(src);

		printf("INPUT : %s\n", src);
		
		
		printf("OUTPUT: %s\n", dest);
		

		//-----------------------------------
		
		//string compare result --------------
		ft_string_compare(src, dest, -1);
		
		//MEMORY PRINT------------------
		printf("print memory-----------\n");
		ft_print_memory(src, -1);
		ft_print_memory(dest, -1);
		free(src);	
		test++;
	}
	


}

void	ft_int_gen(int *num, int test)
{
	switch (test)
	{
		case 0:
			*num = 5;
			break;			
		case 1:
			*num = INTMAX;
			break;
		case 2:
			*num = INTMIN;
			break;
		case 3:
			*num = 0;
			break;
	}
}

void	ft_char_p_gen(char *c, int test)
{
	switch (test)
	{
		case 0:
			*c = 'a';
			break;			
		case 1:
			*c = 'A';
			break;
		case 2:
			*c = '_';
			break;
		case 3:
			*c = '?';
			break;
	}
}

void	ft_char_np_gen(char *c, int test)
{
	switch (test)
	{
		case 0:
			*c = '\t';
			break;			
		case 1:
			*c = '\n';
			break;
		case 2:
			*c = '\0';
			break;
		case 3:
			*c = 127;
			break;
	}
}

void	ft_string_copy(char *src1, char *src2)
{
	int	i = 0;
	
	//free(src2);	
	while (src1[i])
	{
		src2[i] = src1[i];
		i++;
	}
	src2[i] = '\0';
}

char	*ft_string_p_gen(int test)
{
	char *text[] = {
			"Bonjour",
			"M.RaymboX is here!",
			"MAJUSCULE",
			"minuscule",
			"1234",
			"Lettre1234",
			"LeTtre et Chiffre 702, + symb *&^%$-_",
			"sdasd"};
	char *s;

	s = (char *)malloc(sizeof(text[test]));
	ft_string_copy(text[test], s);
	return (s);
}

void	ft_string_np_gen(char *src, int test)
{
	char s0[] = "Bon\tjour";
	char s1[] = {5, 12, 31, 25, 0};
	char s2[] = {127, 127, 127, 0};

	switch (test)
	{
		case 0:
			src = s0;
			break;			
		case 1:
			src = s1;
			break;
		case 2:
			src = s2;
			break;
	}
}

void	ft_print_memory(char *src, int slen)
{
	int	i = 0;
	
	if (slen < 0)
		slen = ft_string_len(src);

	while (i <= slen)
	{
		if (src[i] >= 32 && src[i] <= 126)
			write(1, &src[i], 1);
		else
			write(1, "@", 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_string_len(char *src)
{
	int	i = 0;
	while (src[i])
		i++;
	return (i);
}

void	ft_string_compare(char *src1, char *src2, int len)
{
	int	i = 0;
	char	pass[] = "string compare PASS";
	char	fail[] = "string compare fail";
	int	P0F1 = 0;
	
	if (len < 0)
		len = ft_string_len(src1);

	while (i < len && P0F1 == 0)
	{
		if (src1[i] != src2[i])
			P0F1 = 1;
		i++;
	}
	if (P0F1 == 0)
		printf("%s\n", pass);
	else
		printf("%s\n", fail);
}

