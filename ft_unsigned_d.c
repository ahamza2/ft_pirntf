/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 01:26:50 by haarab            #+#    #+#             */
/*   Updated: 2022/11/06 01:26:51 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_d(unsigned int nb)
{
	int		p;

	p = 0;
	if (nb >= 10)
	{
		p += ft_unsigned_d(nb / 10);
		p += ft_unsigned_d(nb % 10);
	}
	else
		p += ft_putchar(nb + 48);
	return (p);
}
