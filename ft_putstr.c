#include "ft_printf.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_putstr(char *s)
{
	int	len;

	if (!s)
		return (ft_putstr("(null)"));
	len = ft_strlen(s);
	write (1, s, len);
	return (len);
}
