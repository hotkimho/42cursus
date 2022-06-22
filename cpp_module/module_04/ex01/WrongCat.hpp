/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:45:03 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/22 18:52:12 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
    WrongCat();
    WrongCat(const WrongCat &copy);
    WrongCat& operator=(const WrongCat &copy);
    ~WrongCat();

    void makeSound() const;
};

#endif