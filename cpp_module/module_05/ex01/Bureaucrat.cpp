/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:53:00 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/23 17:50:30 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("DefaultName") {
    grade = 75;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
    *this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy) {
    this->grade = copy.grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(std::string name, int grade) :name(name) {
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(std::string name) : name(name) {
    this->grade = 75;
}

Bureaucrat::Bureaucrat(int grade) : name("DefaultName") {
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
}


void Bureaucrat::setGrade(int grade) {
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
}

std::string Bureaucrat::getName() const {
    return this->name;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}

void Bureaucrat::increaseGrade() {
    if (grade < 2)
        throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decreaseGrade() {
    if (grade > 149)
        throw GradeTooLowException();
    this->grade++;
}

void Bureaucrat::signForm(Form &form) const {
    if (form.getIsSign()) {
        std::cout << "Bureaucrat(" << this->name << ") signed ";
        std::cout << "Form(" << form.getName() << ")" << std::endl;
    }
    else {
        std::cout << "Bureaucrat(" << this->name << ") could't sign ";
        std::cout << "Form(" << form.getName() << ") because Grade Too Low" << std::endl;
    }
}

std::ostream &operator<<(std::ostream &outStream, const Bureaucrat &bur) {
    outStream << bur.getName() << ", bureaucrat grade " << bur.getGrade();
    return outStream;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Bureaucrat Error : Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat Error : Grade Too Low";
}