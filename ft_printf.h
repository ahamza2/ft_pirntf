/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:27:07 by haarab            #+#    #+#             */
/*   Updated: 2022/11/06 12:32:53 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_putstr(char *s);

int	ft_putnbr(int n);

int	ft_putchar(char c);

int	ft_printf(const char *str, ...);

int	ft_hexadl(unsigned long nb);

int	ft_hexadu(unsigned long nb);

int	ft_unsigned_d(unsigned int nb);

int	ft_conv(const char c, va_list print);

#endif
