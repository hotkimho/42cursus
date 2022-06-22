/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:32:47 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/22 18:56:53 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	try {
        Bureaucrat A("A", 100);
        Bureaucrat B("B", 1);
        Bureaucrat C("C", 150);
        Bureaucrat D;

        std::cout << A << std::endl;
        std::cout << B << std::endl;
        std::cout << C << std::endl;
        std::cout << D << std::endl;
    } catch (std::exception &error) {
        std::cout << error.what() << std::endl;
    }

    std::cout << std::endl;
    try {
        Bureaucrat A("A", 151);

        std::cout << A << std::endl;
    } catch (std::exception &error) {
        std::cout << error.what() << std::endl;
    }

    std::cout << std::endl;
    try {
        Bureaucrat A("A", 0);

        std::cout << A << std::endl;
    } catch (std::exception &error) {
        std::cout << error.what() << std::endl;
    }

    std::cout << std::endl;
    try {
        Bureaucrat A("A", 2);
        A.increaseGrade();
        A.increaseGrade();
        std::cout << A << std::endl;
    } catch (std::exception &error) {
        std::cout << error.what() << std::endl;
    }

    std::cout << std::endl;
    try {
        Bureaucrat A("A", 149);
        A.decreaseGrade();
        A.decreaseGrade();
        std::cout << A << std::endl;
    } catch (std::exception &error) {
        std::cout << error.what() << std::endl;
    }
	return 0;
}