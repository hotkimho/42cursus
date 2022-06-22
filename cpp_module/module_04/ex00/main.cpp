/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:32:47 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/22 18:56:53 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;
    animal->makeSound();
    dog->makeSound();
    cat->makeSound();

    delete animal;
    delete cat;
    delete dog;
    std::cout << "-----Wrong case-----" << std::endl;

    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongAnimal->getType() << std::endl;
    std::cout << wrongCat->getType() << std::endl;
    wrongAnimal->makeSound();
    wrongCat->makeSound();

    delete wrongCat;
    delete wrongAnimal;
	return 0;
}