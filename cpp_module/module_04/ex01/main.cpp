/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:32:47 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/22 20:41:20 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    Animal *animals[2];
    Dog dog;
    Cat cat;

    for (int i = 0; i < 2; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    
    for (int i = 0; i < 100; i++)
    {
        ((Dog *)animals[0])->setBrainIdea(std::to_string(i+1) +" Dog Idea", i);
        ((Cat *)animals[1])->setBrainIdea(std::to_string(i+1) +" Cat Idea", i);
    }

    for (int i = 0; i < 5; i++)
    {
       std::cout << ((Dog *)animals[0])->getBrainIdea(i) << std::endl;
       std::cout << ((Cat *)animals[1])->getBrainIdea(i) << std::endl;
    }
    
    Dog copyDog;
    Cat copyCat;

    copyDog = *((Dog *)animals[0]);
    copyCat = *((Cat *)animals[1]);
    copyDog.setBrainIdea("test Dog", 1);
    copyCat.setBrainIdea("test Cat", 3);
    
    std::cout << "----------copy Animal---------" << std::endl;

    for (int i = 0; i < 5; i++)
    {
       std::cout << copyDog.getBrainIdea(i) << std::endl;
       std::cout << copyCat.getBrainIdea(i) << std::endl;
    }

    std::cout << "----------original Animal---------" << std::endl;
    
    for (int i = 0; i < 5; i++)
    {
       std::cout << ((Dog *)animals[0])->getBrainIdea(i) << std::endl;
       std::cout << ((Cat *)animals[1])->getBrainIdea(i) << std::endl;
    }
    
    for (int i = 0; i < 2; i++)
        delete animals[i];

	return 0;
}