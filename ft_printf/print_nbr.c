/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 23:20:03 by hkim2             #+#    #+#             */
/*   Updated: 2021/10/30 23:22:17 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	recursive_nbr(int n)
{
	char	tmp;
	int		len;

	len = 0;
	if (n >= 10)
		len += recursive_nbr(n / 10);
	tmp = '0' + n % 10;
	len += write(1, &tmp, 1);
	return (len);
}

int	ft_putnbr(int n)
{
	int		len;

	len = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		n = n * -1;
		len += write(1, "-", 1);
	}
	return (recursive_nbr(n) + len);
}

int	print_nbr(int nbr)
{
	return (ft_putnbr(nbr));
}

int	recursive_unsigned_nbr(unsigned int n)
{
	char				tmp;
	unsigned int		len;

	len = 0;
	if (n >= 10)
		len += recursive_nbr(n / 10);
	tmp = '0' + n % 10;
	len += write(1, &tmp, 1);
	return (len);
}

int	print_unsigned_int(unsigned int nbr)
{
	return (recursive_unsigned_nbr(nbr));
}
