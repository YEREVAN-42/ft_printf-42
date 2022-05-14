/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:02:05 by khovakim          #+#    #+#             */
/*   Updated: 2022/03/30 18:08:59 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *print, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putptr(void *p);
int	ft_put_hex(unsigned long n, int type);
int	ft_putnbr_unsigned(unsigned int n);

#endif
