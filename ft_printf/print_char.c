/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 23:18:14 by hkim2             #+#    #+#             */
/*   Updated: 2021/10/30 23:18:27 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_character(char ch)
{
	return (write(1, &ch, 1));
}

int	ft_putchar(char c)
{
	int		len;

	len = write(1, &c, 1);
	return (len);
}
