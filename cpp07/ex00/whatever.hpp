/**
 * @file whatever.hpp
 * @author dcruz-na
 * @brief Header with templates
 * @version 0.1
 * @date 2023-07-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP


#include <iostream>


template <typename T>
void    swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}


template <typename T>
T const &min(T const &a, T const &b)
{
    return (a < b ? a : b);
}

template <typename T>
T const &max(T const &a, T const &b)
{
    return (a > b ? a : b);
}

#endif