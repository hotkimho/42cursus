/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:32:47 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/23 23:08:13 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
    try {
        Bureaucrat a("A", 10);
        ShrubberyCreationForm s("S");

        s.beSigned(a);
        a.signForm(s);

        a.executeForm(s);
        s.execute(a);
    } catch(std::exception &error) {
        std::cout << error.what() << std::endl;
    }

    std::cout << std::endl;
    try {
        Bureaucrat aa("AA", 10);
        ShrubberyCreationForm ss("SS");

        aa.executeForm(ss);
        ss.execute(aa);
    } catch(std::exception &error) {
        std::cout << error.what() << std::endl;
    }

    std::cout << std::endl;
    try {
        Bureaucrat b("B", 10);
        RobotomyRequestForm r("R");

        r.beSigned(b);
        b.signForm(r);
        
        b.executeForm(r);
        r.execute(b);
    } catch(std::exception &error) {
        std::cout << error.what() << std::endl;
    }

    std::cout << std::endl;
    try {
        Bureaucrat bb("BB", 50);
        RobotomyRequestForm rr("RR");

        bb.executeForm(rr);
        rr.execute(bb);
    } catch(std::exception &error) {
        std::cout << error.what() << std::endl;
    }

    std::cout << std::endl;
    try {
        Bureaucrat c("C", 2);
        PresidentialPardonForm p("P");

        p.beSigned(c);
        c.signForm(p);

        c.executeForm(p);
        p.execute(c);
    } catch(std::exception &error) {
        std::cout << error.what() << std::endl;
    }

    std::cout << std::endl;
    try {
        Bureaucrat cc("CC", 50);
        PresidentialPardonForm pp("PP");

        pp.beSigned(cc);
        cc.signForm(pp);
        
        cc.executeForm(pp);
        pp.execute(cc);
    } catch(std::exception &error) {
        std::cout << error.what() << std::endl;
    }

	return 0;
}