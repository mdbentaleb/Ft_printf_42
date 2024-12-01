#include "ft_printf.h"

int ft_putunbr(unsigned int nbr)
{
    int count;

    count = 0;
    if (nbr >= 10)
        count += ft_putunbr(nbr / 10);
    count += ft_putchar((nbr % 10) + '0');
    return (count);
}
