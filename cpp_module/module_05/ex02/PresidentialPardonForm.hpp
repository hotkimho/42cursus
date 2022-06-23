/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 22:38:19 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/23 23:01:58 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PREIDENTIALPARDONFORM_HPP
#define PREIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form {
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &copy);
    PresidentialPardonForm& operator=(const PresidentialPardonForm &copy);
    ~PresidentialPardonForm();   
    
    void execute(Bureaucrat const &executor) const;
private:
    std::string target;
};

#endif
