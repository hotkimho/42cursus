
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(std::string name);
    Bureaucrat(int grade);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat& operator=(const Bureaucrat &copy);
    ~Bureaucrat();

    void setName(std::string name);
    void setGrade(int grade);
    std::string getName() const;
    int getGrade() const;
    void increaseGrade();
    void decreaseGrade();

    class GradeTooHighException : public std::exception {
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        const char *what() const throw();
    };
private:
    std::string name;
    int grade;
};

std::ostream& operator<<(std::ostream &outStream, const Bureaucrat &bur);
#endif
