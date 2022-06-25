/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 19:15:58 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/25 19:15:58 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array() {

}

Array::Array(const Array &copy) {
    *this = copy;
}

Array& Array::operator=(const Array &copy) {
    return *this;
}

Array::~Array() {
}
