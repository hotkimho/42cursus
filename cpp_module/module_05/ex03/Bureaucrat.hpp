/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:52:58 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/23 19:15:07 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat {
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(std::string name);
    Bureaucrat(int grade);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat& operator=(const Bureaucrat &copy);
    ~Bureaucrat();

    void setGrade(int grade);
    std::string getName() const;
    int getGrade() const;
    void increaseGrade();
    void decreaseGrade();

    void signForm(Form &form) const;
    void executeForm(Form const & form);
    
    class GradeTooHighException : public std::exception {
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        const char *what() const throw();
    };
private:
    const std::string name;
    int grade;
};

std::ostream& operator<<(std::ostream &outStream, const Bureaucrat &bur);
#endif
