#include "ft_printf.h"


int	check_format (char c, va_list arg)
{
	
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
		{
			count += check_format(format[i + 1], arg);
		}
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
