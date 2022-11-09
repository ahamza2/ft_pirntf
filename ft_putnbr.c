/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:27:27 by haarab            #+#    #+#             */
/*   Updated: 2022/11/02 11:27:28 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		p;
	long	nb;

	p = 0;
	nb = n;
	if (nb < 0)
	{
		p += write (1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		p += ft_putnbr(nb / 10);
		p += ft_putnbr(nb % 10);
	}
	else
		p += ft_putchar(nb + 48);
	return (p);
}
