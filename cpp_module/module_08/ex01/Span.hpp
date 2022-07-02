/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:53:13 by hkim2             #+#    #+#             */
/*   Updated: 2022/07/02 22:58:25 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span {
public:
    Span();
    Span(const Span &copy);
    Span& operator=(const Span &copy);
    ~Span();

    Span(unsigned int size);
    void addNumber(unsigned int num);

    unsigned int shortestSpan();
    unsigned int longestSpan();
    
    static bool compare(unsigned int a, unsigned int b) {
    return a > b;
    }
    class CannotSpanException : public std::exception {
    public:
        const char *what() const throw();
    };

    class OutOfBoundException : public std::exception {
    public:
        const char *what() const throw();
    };
private:
    std::vector<unsigned int> vec;
    unsigned int size;
};

#endif