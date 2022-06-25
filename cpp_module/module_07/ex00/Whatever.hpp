/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:35:18 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/25 18:53:19 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b) {
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T a, T b) {
    if (a < b)
        return a;
    return b;
}

template <typename T>
T max(T a, T b) {
    if (a > b)
        return a;
    return b;
}
#endif