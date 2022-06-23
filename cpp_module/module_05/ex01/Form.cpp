/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:53:00 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/23 18:04:51 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("DefaultName"), signGrade(75), executeGrade(75) {
    this->isSign = false;
}

Form::Form(const Form &copy) : name("DefaultName"), signGrade(75), executeGrade(75) {
    *this = copy;
}

Form& Form::operator=(const Form &copy) {
    this->isSign = copy.isSign;
    return *this;
}

Form::~Form() {
}

Form::Form(std::string name, int signGrade, int executeGrade) 
    : name(name), signGrade(signGrade), executeGrade(executeGrade) {
    if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    this->isSign = false;
}

Form::Form(std::string name) : name(name), signGrade(75), executeGrade(75) {
    this->isSign = false;
}

Form::Form(int signGrade, int executeGrade) 
    : name("DefaultName"), signGrade(signGrade), executeGrade(executeGrade) {
    if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    this->isSign = false;
}

std::string Form::getName() const {
    return this->name;
}

int Form::getSignGrade() const {
    return this->signGrade;
}

int Form::getExecuteGrade() const {
    return this->executeGrade;
}

bool Form::getIsSign() const {
    return this->isSign;
}

void Form::beSigned(Bureaucrat &bur) {
    if (this->signGrade > bur.getGrade() && this->executeGrade > bur.getGrade())
        this->isSign = true;
    else
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &outStream, const Form &form) {
    outStream << form.getName() << ", Form signGrade " << form.getSignGrade()
    << ", executeGrade " << form.getExecuteGrade();
    return outStream;
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Form Error : Grade Too High";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Form Error : Grade Too Low";
}