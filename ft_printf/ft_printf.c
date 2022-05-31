/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr              +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 01:40:15 by marvin            #+#    #+#             */
/*   Updated: 2021/10/30 23:17:46 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parse_format(va_list ap, char *format)
{
	int		result;

	result = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 0)
				break ;
			result += parse_type(ap, format);
		}
		else
			result += ft_putchar(*format);
		format++;
	}
	return (result);
}

int	parse_type(va_list ap, char *format)
{
	int		len;

	len = 0;
	if (*format == 'c')
		len += print_character(va_arg(ap, int));
	else if (*format == 's')
		len += print_string(va_arg(ap, char *));
	else if (*format == 'd' || *format == 'i')
		len += print_nbr(va_arg(ap, int));
	else if (*format == 'x' || *format == 'X')
		len += print_hex(va_arg(ap, int), *format);
	else if (*format == 'u')
		len += print_unsigned_int(va_arg(ap, unsigned int));
	else if (*format == 'p')
		len += print_address(va_arg(ap, unsigned long long));
	else if (*format == '%')
		len += write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int			result;
	va_list		ap;

	result = 0;
	va_start(ap, format);
	result = parse_format(ap, (char *)format);
	va_end(ap);
	return (result);
}
