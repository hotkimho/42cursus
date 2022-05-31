/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 23:01:33 by hkim2             #+#    #+#             */
/*   Updated: 2021/10/30 23:03:02 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		print_character(char ch);
int		ft_putchar(char c);
int		print_string(char *str);
int		recursive_nbr(int n);
int		ft_putnbr(int n);
int		print_nbr(int nbr);
int		recursive_unsigned_nbr(unsigned int n);
int		print_unsigned_int(unsigned int nbr);
int		dec_to_hex(char *base, unsigned long long dec);
int		print_hex(unsigned int dec, char x);
int		print_address(unsigned long long addr);
size_t	ft_strlen(const char *s);
int		parse_format(va_list ap, char *format);
int		parse_type(va_list ap, char *format);
int		ft_printf(const char *format, ...);
#endif
