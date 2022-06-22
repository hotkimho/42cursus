/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:45:03 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/22 18:53:39 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
    public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &copy);
    WrongAnimal& operator=(const WrongAnimal &copy);
    ~WrongAnimal();
	
	void makeSound() const;
	std::string getType() const;
	void setType(std::string type);
    private:
    
	protected:
	std::string type;
};

#endif