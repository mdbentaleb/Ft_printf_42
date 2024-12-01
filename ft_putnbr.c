#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nbr;
	int		count;

	nbr = n;
	count = 0;
	if (nbr < 0)
	{
		count += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= 10)
		count += ft_putnbr(nbr / 10);
	count += ft_putchar((nbr % 10) + '0');
	return (count);
}