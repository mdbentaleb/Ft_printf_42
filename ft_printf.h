#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putunbr(unsigned int nbr);
int	ft_putnbr(int n);
int	ft_putstr(char *s);

#endif