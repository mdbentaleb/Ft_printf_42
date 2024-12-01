#include "ft_printf.h"


int	check_format (char c, va_list arg)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(arg, int));
	else if (c == 'c')
		count = ft_putchar(va_arg(arg, char));
	else if (c == 's')
		count = ft_putstr(va_arg(arg, char *));
	else if (c == 'u')
		count = ft_putunbr(va_arg(arg, unsigned int));
	else if (c == 'x' || c == 'X')
		count = ft_puthex(va_arg(arg, unsigned long), c);
	else if (c == 'p')
		count = ft_putaddr(va_arg(arg, unsigned long));
	else if (c == '%')
		count = ft_putchar(c);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int	count;
	int	i;

	va_start(arg, format);
	count = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			count += check_format(format[i + 1], arg);
		else
		{
			ft_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
