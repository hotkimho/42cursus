/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 21:08:16 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/23 23:00:38 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : Form("RobotomyRequestForm", 72, 45) {
    this->target = "DefaultTarget";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
    : Form("RobotomyRequestForm", 72, 45) {
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : Form("RobotomyRequestForm", 72, 45) {
    this->target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    srand(time(NULL));
    if (this->getIsSign()) {
        if (this->getExecuteGrade() > executor.getGrade()) {
            int isFlag;
            isFlag = rand() % 2;
            if (isFlag) {
                std::cout << "Drill Noise~ " << this->target << "Becomes a Robot" << std::endl;
            } else {
                std::cout << this->target << " Failed to Become a robot" << std::endl;
            }
        } else {
            throw GradeTooLowException();
        }
    } else {
        throw NotSignedException();
    }
}