/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 21:21:06 by hkim2             #+#    #+#             */
/*   Updated: 2022/07/02 22:54:49 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
    this->size = 0;
}

Span::Span(const Span &copy) {
    *this = copy;
}

Span& Span::operator=(const Span &copy) {
    this->size = copy.size;
    this->vec = copy.vec;
    return *this;
}

Span::~Span() {
}

Span::Span(unsigned int size) {
    this->size = size;
}

void Span::addNumber(unsigned int num) {
    if (this->vec.size() >= this->size) {
        throw OutOfBoundException();
    }
    std::vector<unsigned int>::iterator it;
    it = std::find(vec.begin(), vec.end(), num);
    if (it != vec.end()) {
        throw CannotSpanException();
    }
    vec.push_back(num);
}

// 3 6 9 11 17
unsigned int Span::shortestSpan() {
    if (vec.size() < 2) {
        throw CannotSpanException();
    }
    std::vector<unsigned int> tmp = vec;
    std::sort(tmp.begin(), tmp.end());
    unsigned int returnValue = UINT_MAX;
    std::vector<unsigned int>::iterator it;
    for (it = tmp.begin(); (it + 1) != tmp.end(); it++) {
        if (*(it + 1) - *it < returnValue) {
            returnValue = *(it + 1) - *it;
        }
    }
    return returnValue;
}

unsigned int Span::longestSpan() {
     if (vec.size() < 2) {
        throw CannotSpanException();
    }
    std::vector<unsigned int> tmp = vec;
    std::sort(tmp.begin(), tmp.end());
    unsigned int returnValue = 0;
    std::vector<unsigned int>::iterator it;
    it = tmp.end();
    returnValue = *(it - 1) - *(tmp.begin());
    return returnValue;
}

const char *Span::OutOfBoundException::what() const throw() {
    return "Out Of Bound";
}

const char *Span::CannotSpanException::what() const throw() {
    return "Can not Span";
}