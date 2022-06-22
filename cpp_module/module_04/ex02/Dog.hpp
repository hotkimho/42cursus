/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:45:03 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/22 19:53:16 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    public:
    Dog();
    Dog(const Dog &copy);
    Dog& operator=(const Dog &copy);
    ~Dog();
	
	void makeSound() const;
    void setBrainIdea(std::string idea, int idx);
    std::string getBrainIdea(int idx);
    private:
    Brain *brain;
};

#endif