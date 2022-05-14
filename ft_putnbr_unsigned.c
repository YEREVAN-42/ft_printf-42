/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:44:52 by khovakim          #+#    #+#             */
/*   Updated: 2022/03/30 18:21:22 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_putnbr_unsigned(n / 10);
	n = n % 10;
	if (n < 10)
		len += ft_putchar(n + 48);
	return (len);
}
