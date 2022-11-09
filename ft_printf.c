/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:57:50 by haarab            #+#    #+#             */
/*   Updated: 2022/11/06 12:36:57 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		p;
	va_list	print;

	p = 0;
	va_start(print, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			p += ft_putchar(str[i]);
		if (str[i] == '%')
		{
			i++;
			p += ft_conv(str[i], print);
		}
		i++;
	}
	va_end(print);
	return (p);
}
