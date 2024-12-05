#include "ft_printf.h"
#include <stdio.h>





int main()
{
	int x = 4;
	int *p = &x;
	printf("%p\n", p);
	ft_printf("%p\n", p);
}