/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:33:18 by haarab            #+#    #+#             */
/*   Updated: 2022/11/06 12:44:59 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadl(unsigned long nb)
{
	int		p;
	char	*hexa;

	hexa = "0123456789abcdef";
	p = 0;
	if (nb <= 15)
	{
		p += ft_putchar(hexa[nb]);
	}
	else
	{
		p += ft_hexadl(nb / 16);
		p += ft_hexadl(nb % 16);
	}
	return (p);
}
