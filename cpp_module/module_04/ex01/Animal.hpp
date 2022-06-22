/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:45:03 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/22 18:49:12 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    public:
    Animal();
    Animal(const Animal &copy);
    Animal& operator=(const Animal &copy);
    virtual ~Animal();
	
	virtual void makeSound() const;
	std::string getType() const;
	void setType(std::string type);
    private:
    
	protected:
	std::string type;
};

#endif