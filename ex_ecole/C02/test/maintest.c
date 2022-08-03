#include <unistd.h>

int main()
{
	char c[5];
	char d;
   	int i;
	
 	i = sizeof(c);
	d = i + '0';
	write (1, &d, 1);
}	
