/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:57:18 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/24 19:09:06 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.cpp"
#include "B.cpp"
#include "C.cpp"
#include <typeinfo>

Base *generate();
void identify(Base *p);
void identify(Base &p);

Base *generate() {
    srand(time(NULL));
    int randomNum = rand() % 3;
    
    if (randomNum == 0) 
        return new A();
     else if (randomNum == 1) 
        return new B();
     else 
        return new C();
    return NULL;
}

void identify(Base *p) {
    if (dynamic_cast<A*>(p))
        std::cout << "pointer A";
    else if (dynamic_cast<B*>(p))
        std::cout << "pointer B";
    else if (dynamic_cast<C*>(p))
        std::cout << "pointer C";
    else
        std::cout << "Found failed";
    std::cout << std::endl;
}

void identify(Base &p) {
    if (dynamic_cast<A*>(&p))
        std::cout << "reference A";
    else if (dynamic_cast<B*>(&p))
        std::cout << "reference B";
    else if (dynamic_cast<C*>(&p))
        std::cout << "reference C";
    else
        std::cout << "Found failed";
    std::cout << std::endl;
}
int main() {
    Base *test = generate();

    identify(test);
    identify(*test);
    std::cout << typeid(test).name() << std::endl;  
}