#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
    char    s1[] = "bonjour";
    char    s2[] = "bonzour";
    char    s3[] = "bonbour";
    char    s4[] = "bonjou";
    char    s5[] = "bonjour!";
    char    s6[1] = "";
    char    scansketuveux[10];

    
    printf("\ntest1 = identique n=4\nAttendu : %d\nFonction: %d\n", strncmp(s1, s1, 4), ft_strncmp(s1, s1, 4));
    printf("\ntest2 = identique n=0\nAttendu : %d\nFonction: %d\n", strncmp(s1, s1, 4), ft_strncmp(s1, s1, 0));
    printf("\ntest3 = s2 caractere plus haut detected\nAttendu : %d\nFonction: %d\n", strncmp(s1, s2, 4), ft_strncmp(s1, s2, 4));
    printf("\ntest4 = s2 caractere plus haut a n+1 \nAttendu : %d\nFonction: %d\n", strncmp(s1, s2, 3), ft_strncmp(s1, s2, 3));
    printf("\ntest5 = s2 caractere plus bas detected\nAttendu : %d\nFonction: %d\n", strncmp(s1, s3, 4), ft_strncmp(s1, s3, 4));
    printf("\ntest6 = s2 caractere plus court\nAttendu : %d\nFonction: %d\n", strncmp(s1, s4, 7), ft_strncmp(s1, s4, 7));
    printf("\ntest7 = s2 caractere plus long\nAttendu : %d\nFonction: %d\n", strncmp(s1, s5, 8), ft_strncmp(s1, s5, 8));
    printf("\n*******************************************\nappuyer sur enter pour continuer>\n");
    scanf("%c", scansketuveux);
    printf("\ntest8 = s1 et s2 vide n=8\nAttendu : %d\nFonction: %d\n", strncmp(s1, s5, 8), ft_strncmp(s6, s6, 8));
    printf("\ntest9 = s1 et s2 vide n=0\nAttendu : %d\nFonction: %d\n", strncmp(s1, s5, 8), ft_strncmp(s6, s6, 0));
    printf("\ntest10 = s2 vide n=5\nAttendu : %d\nFonction: %d\n", strncmp(s1, s6, 5), ft_strncmp(s1, s6, 5));
    printf("\ntest11 = s2 vide n=0\nAttendu : %d\nFonction: %d\n", strncmp(s1, s6, 0), ft_strncmp(s1, s6, 0));
    printf("\ntest12 = s1 vide n=5\nAttendu : %d\nFonction: %d\n", strncmp(s6, s1, 5), ft_strncmp(s6, s1, 5));
    printf("\ntest13 = s1 vide n=0\nAttendu : %d\nFonction: %d\n", strncmp(s6, s1, 0), ft_strncmp(s6, s1, 0));
}
