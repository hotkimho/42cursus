/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:47:17 by hkim2             #+#    #+#             */
/*   Updated: 2022/07/02 22:58:22 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    
    Span sp = Span(5);
    Span sp2 = Span(1);
    try {
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.addNumber(42);
    } catch(std::exception &error) {
        std:: cout << error.what() << std::endl;
        return 1;
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
    sp2.addNumber(42);
    try {
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
    } catch(std::exception &error) {
        std:: cout << error.what() << std::endl;
        return 1;
    }
    return 0;
}