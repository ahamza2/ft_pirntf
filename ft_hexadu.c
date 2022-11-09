/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:09:12 by haarab            #+#    #+#             */
/*   Updated: 2022/11/06 12:33:01 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadu(unsigned long nb)
{
	int		p;
	char	*hexa;

	hexa = "0123456789ABCDEF";
	p = 0;
	if (nb <= 15)
	{
		p += ft_putchar(hexa[nb]);
	}
	else
	{
		p += ft_hexadu(nb / 16);
		p += ft_hexadu(nb % 16);
	}
	return (p);
}
