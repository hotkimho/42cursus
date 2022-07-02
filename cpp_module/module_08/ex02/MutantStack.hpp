/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 23:02:00 by hkim2             #+#    #+#             */
/*   Updated: 2022/07/03 00:19:03 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack() {}
    MutantStack(const MutantStack &copy) {
        *this = copy;
    }
    MutantStack& operator=(const MutantStack &copy) {
        *this = copy;
        return *this;
    }
    ~MutantStack() {}

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    iterator begin() {
        return this->c.begin();
    }
    iterator end() {
        return this->c.end();
    }

    const_iterator cbegin() const {
        return this->c.cbegin();
    }
    const_iterator cend() const {
        return this->c.cend();
    }

    reverse_iterator rbegin() {
        return this->c.rbegin();
    }
    reverse_iterator rend() {
        return this->c.rend();
    }

    const_reverse_iterator crbegin() {
        return this->c.crbegin();
    }
    const_reverse_iterator crend() {
        return this->c.crend();
    }
};

#endif