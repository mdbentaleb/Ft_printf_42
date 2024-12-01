#include <unistd.h>


int ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}


int main()
{
	int count = ft_putchar('c');
	printf("%d\n", count);
	// ft_putchar('\n');
}