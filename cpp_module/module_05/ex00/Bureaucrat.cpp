#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    this->name = "DefaultName";
    grade = 75;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
    *this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy) {
    return *this;
}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(std::string name, int grade) {
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    this->name = name;
    this->grade = grade;
}

Bureaucrat::Bureaucrat(std::string name) {
    this->name = name;
    this->grade = 75;
}

Bureaucrat::Bureaucrat(int grade) {
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
    this->name = "DefaultName";
}

void Bureaucrat::setName(std::string name) {
    this->name = name;
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

std::ostream &operator<<(std::ostream &outStream, const Bureaucrat &bur)
{
    outStream << bur.getName() << ", bureaucrat grade " << bur.getGrade();
    return outStream;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Bureaucrat Error : Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat Error : Grade Too Low";
}