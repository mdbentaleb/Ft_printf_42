#include "ft_printf.h"

int ft_printunbr(unsigned int nbr)
{
    int count;

    count = 0;
    if (nbr >= 10)
        count += ft_printunbr(nbr / 10);
    count += ft_putchar((nbr % 10) + '0');
    return (count);
}
