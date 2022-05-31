/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 23:18:41 by hkim2             #+#    #+#             */
/*   Updated: 2021/10/30 23:19:23 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dec_to_hex(char *base, unsigned long long dec)
{
	int		len;
	char	tmp;

	len = 0;
	if (dec >= 16)
		len += dec_to_hex(base, dec / 16);
	tmp = base[dec % 16];
	len += write(1, &tmp, 1);
	return (len);
}

int	print_hex(unsigned int dec, char x)
{
	if (x == 'x')
		return (dec_to_hex("0123456789abcdef", dec));
	return (dec_to_hex("0123456789ABCDEF", dec));
}

int	print_address(unsigned long long addr)
{
	write(1, "0x", 2);
	return (2 + dec_to_hex("0123456789abcdef", addr));
}
