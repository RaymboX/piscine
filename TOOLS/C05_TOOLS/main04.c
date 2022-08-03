#include <stdio.h>

#define INTMIN -2147483648
#define INTMAX 2147483647

int ft_fibonacci(int index);

int main()
{
    int i;
    int i1;
    int i2;
    int it;
    char inputsketuveux[100];
    
    i = 0;
    i1 = 1;
    i2 = 0;
    printf("INPUT --> ATTENDU --> FONCTION\n");
    while (i < 20)
    {
        if (i2 != ft_fibonacci(i))
            printf("*FAIL* ");
        printf("%d --> %d --> %d\n", i, i2, ft_fibonacci(i));
        it = i1;
        i1 = i2;
        i2 = i2 + it;
        i++;
    }
    i = -10;
    printf("%d --> -1 --> %d\n", i, ft_fibonacci(i));
    
    printf("appuyer sur enter pour faire le fail test\nLe retour doit etre une segmentation fault");
    scanf("%c", inputsketuveux);
    
    i = INTMAX;
    printf("%d - %d \n", i, ft_fibonacci(i));
    
    printf("******FAIL segmentation fault test*******");
    
    return (0);
}
