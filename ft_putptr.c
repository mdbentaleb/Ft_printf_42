/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moben-ta <moben-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:07:56 by moben-ta          #+#    #+#             */
/*   Updated: 2024/12/04 18:24:41 by moben-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned int nb)
{
	int	count;

	count = 2;
	write(1, "0x", 2);
	count += ft_puthex(nb, 'x');
	return (count);
}
