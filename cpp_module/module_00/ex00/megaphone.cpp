/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 00:42:29 by marvin            #+#    #+#             */
/*   Updated: 2022/06/18 00:42:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	ft_to_upper(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return ch - 32;
	return ch;
}

int main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
			std::cout << ft_to_upper(argv[i][j++]);
		i++;
	}
	std::cout<<std::endl;
	return (0);
}