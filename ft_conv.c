/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:19:32 by haarab            #+#    #+#             */
/*   Updated: 2022/11/06 12:36:48 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conv(const char c, va_list print)
{
	int	p;

	p = 0;
	if (c == 'c')
		p += ft_putchar (va_arg(print, int));
	else if (c == 's')
		p += ft_putstr (va_arg(print, char *));
	else if (c == 'd' || c == 'i')
		p += ft_putnbr (va_arg(print, long));
	else if (c == 'p')
	{
		p += ft_putstr("0x");
		p += ft_hexadl(va_arg(print, unsigned long));
	}
	else if (c == 'x')
		p += ft_hexadl (va_arg(print, unsigned int));
	else if (c == 'X')
		p += ft_hexadu (va_arg(print, unsigned int));
	else if (c == 'u')
		p += ft_unsigned_d (va_arg(print, unsigned int));
	else if (c == '%')
		p += ft_putchar('%');
	return (p);
}
