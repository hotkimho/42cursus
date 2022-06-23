/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 22:40:16 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/23 23:02:03 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : Form("PresidentialPardonForm", 25, 5) {
    this->target = "DefaultTarget";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
    : Form("PresidentialPardonForm", 25, 5) {
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : Form("PresidentialPardonForm", 25, 5) {
    this->target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (this->getIsSign()) {
        if (this->getExecuteGrade() > executor.getGrade()) {
            std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
        } else {
            throw GradeTooLowException();
        }
    } else {
        throw NotSignedException();
    }
}