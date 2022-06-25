/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 19:13:42 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/25 20:31:01 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
    public:
    Array() {
        arrSize = 0;
        arr = NULL;
    }

    Array(unsigned int size) {
        arr = new T(size);
        this->arrSize = size;
    }

    Array(const Array &copy) {
        this->arrSize = copy.arrSize;
        arr = new T(this->arrSize);
        for (int i = 0; i < arrSize; i++)
            arr[i] = copy.arr[i];
    }

    Array& operator=(const Array &copy) {
        if (arr)
            delete[] arr;
        arrSize = copy.arrSize;
        arr = new T(arrSize);
        for (unsigned int i = 0; i < arrSize; i++)
            arr[i] = copy.arr[i];
        return *this;
    }

    T operator[](unsigned int idx) {
        if (arrSize <= idx)
            throw IndexIsOutOfBound();
        return arr[idx];
    }
    
    T operator[](unsigned int idx) const {
        if (arrSize <= idx)
            throw IndexIsOutOfBound();
        return arr[idx];
    }

    ~Array() {
        delete[] arr;
    };

    unsigned int size() {
        return this->arrSize;
    }

    void setArray(unsigned int idx) {
        if (arrSize < idx) 
            throw IndexIsOutOfBound();
        for (unsigned int i = 0; i < idx; i++)
            arr[i] = i;
    }
    
    void setIndexValue(unsigned idx, int value) {
        if (arrSize < idx) 
            throw IndexIsOutOfBound();
        arr[idx] = value;
    }
    
    int getArrayValue(int idx) const {
        if (arrSize < idx) 
            throw IndexIsOutOfBound();
        return arr[idx];
    }
    class IndexIsOutOfBound : public std::exception {
    public:
        const char *what() const throw() {
            return "Index Is Out of Bound";
        }
    };
    private:
    unsigned int arrSize;
    T *arr;
};
#endif