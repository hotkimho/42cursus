/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:45:03 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/22 18:49:09 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    public:
    Cat();
    Cat(const Cat &copy);
    Cat& operator=(const Cat &copy);
    ~Cat();
	
	void makeSound() const;
};

#endif