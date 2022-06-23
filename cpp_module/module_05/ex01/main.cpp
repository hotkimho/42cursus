/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:32:47 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/23 18:03:32 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	try {
        std::cout << "------Bureaucrat--------" << std::endl;
        Bureaucrat A("A", 100);
        Bureaucrat B("B", 1);
        Bureaucrat C("C", 150);
        Bureaucrat D;

        std::cout << A << std::endl;
        std::cout << B << std::endl;
        std::cout << C << std::endl;
        std::cout << D << std::endl;

        std::cout << "------Form--------" << std::endl;
        Form a("a", 1, 150);
        Form b(1, 150);
        Form c;

        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
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

    std::cout << std::endl;
    try {
        Form B("B", 151, 151);

        std::cout << B << std::endl;
    } catch (std::exception &error) {
        std::cout << error.what() << std::endl;
    }

    std::cout << std::endl;
    try {
        Form B("B", 0, 0);

        std::cout << B << std::endl;
    } catch (std::exception &error) {
        std::cout << error.what() << std::endl;
    }

    std::cout << std::endl;
    try {
        Bureaucrat A("A", 10);
        Form B("B", 50, 50);
        
        std::cout << A << std::endl;
        std::cout << B << std::endl;
        B.beSigned(A);
        A.signForm(B);
    } catch (std::exception &error) {
        std::cout << error.what() << std::endl;
    }

    std::cout << std::endl;
    try {
        Bureaucrat A("A", 10);
        Form B("B", 2, 140);
        
        std::cout << A << std::endl;
        std::cout << B << std::endl;
        B.beSigned(A);
        A.signForm(B);
    } catch (std::exception &error) {
        std::cout << error.what() << std::endl;
    }
	return 0;
}