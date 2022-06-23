/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:33:25 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/23 22:57:40 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("ShrubberyCreationForm", 145, 137) {
    this->target = "DefaultTarget";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
    : Form("ShrubberyCreationForm", 145, 137) {
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form("ShrubberyCreationForm", 145, 137) {
    this->target = target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (this->getIsSign()) {
        if (this->getExecuteGrade() > executor.getGrade()) {
            std::ofstream shrubbeyFile(target + "_shrubbery");  
            shrubbeyFile << "       ###\n"
                            "      #o###\n"
                            "    #####o###\n"
                            "   #o###|#/###\n"
                            "    ####|/#o#\n"
                            "     # }|{  #\n"
                            "       }|{\n";
            shrubbeyFile.close();
        } else {
            throw GradeTooLowException();
        }
    } else {
        throw NotSignedException();
    }
}