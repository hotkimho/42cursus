/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:47:17 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/25 18:54:23 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int main() {

    int a = 5, b = 100;
    std::cout << "before swap" << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    swap(a, b);
    std::cout << "after swap" << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    std::cout << "min value : " << min(a, b) << std::endl;
    std::cout << "max value : " << max(a, b) << std::endl;
}