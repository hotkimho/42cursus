/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:26:43 by hkim2             #+#    #+#             */
/*   Updated: 2022/07/02 20:45:22 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
bool easyfind(T con, int num) {
    typename T::iterator iter;
    
    iter = std::find(con.begin(), con.end(), num);
    if (iter == con.end())
        return false;
    return true;
}

#endif