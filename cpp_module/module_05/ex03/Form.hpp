/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:53:02 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/23 22:55:19 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;
class Form {
public:
    Form();
    Form(std::string name, int signGrade, int executeGrade);
    Form(int signGrade, int executeGrade);
    Form(std::string name);
    Form(const Form &copy);
    Form& operator=(const Form &copy);
    virtual ~Form();
    
    void beSigned(Bureaucrat &bur);
    std::string getName() const ;
    int getSignGrade() const;
    int getExecuteGrade() const;
    bool getIsSign() const;
    
    virtual void execute(Bureaucrat const &executor) const = 0;

    class GradeTooHighException : public std::exception {
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        const char *what() const throw();
    };
    class NotSignedException : public std::exception {
    public:
        const char *what() const throw();
    };
private:
    const std::string name;
    bool isSign;
    const int signGrade;
    const int executeGrade;
};

std::ostream& operator<<(std::ostream &outStream, const Form &form);
#endif
