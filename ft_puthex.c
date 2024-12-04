/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moben-ta <moben-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:20:56 by moben-ta          #+#    #+#             */
/*   Updated: 2024/12/04 18:22:17 by moben-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	checkchar(int nb, char c)
{
	char	*base;

	base = NULL;
	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	return (base[nb]);
}

int	ft_puthex(unsigned int n, char c)
{
	int		count;
	char	a;

	count = 0;
	if (n >= 16)
		count += ft_puthex(n / 16, c);
	a = checkchar(n % 16, c);
	count += ft_putchar(a);
	return (count);
}

// int	ft_puthexa(unsigned int n, char format)
// {
// 	int		count;
// 	char	*s;

// 	s = "0123456789abcdef";
// 	count = 0;
// 	if (format == 'X')
// 		s = "0123456789ABCDEF";
// 	if (n < 16)
// 		count += ft_putchar(s[n]);
// 	else
// 	{
// 		count += ft_puthexa(n / 16, format);
// 		count += ft_putchar(s[n % 16]);
// 	}
// 	return (count);
// }
