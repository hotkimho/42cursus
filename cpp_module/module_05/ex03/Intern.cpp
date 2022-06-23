/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:33:25 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/23 23:27:39 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
  
}

Intern::Intern(const Intern &copy) {
    *this = copy;
}

Intern& Intern::operator=(const Intern &copy) {
    return *this;
}

Intern::~Intern() {
}

Form *Intern::makeForm(std::string form, std::string target) {
    Form *forms[3];
    std::string formName[3] ={
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    
    forms[0] = new ShrubberyCreationForm(target);
    forms[1] = new RobotomyRequestForm(target);
    forms[2] = new PresidentialPardonForm(target);

    int returnIndex;
    for (returnIndex = 0; returnIndex < 3; returnIndex++) 
        if (formName[returnIndex] == form) 
            break; 
    for (int i = 0; i < 3; i++) {
        if (i != returnIndex) 
            delete forms[i];
    }
    return forms[returnIndex];
}