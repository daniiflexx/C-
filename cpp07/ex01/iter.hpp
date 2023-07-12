/**
 * @file iter.hpp
 * @author dcruz-na
 * @brief iter header file
 * @version 0.1
 * @date 2023-07-12
 * 
 * @copyright Copyright (c) 2023
 * 
*/

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void    iter(T *array, size_t length, void (*f)(T const &))
{
    for (size_t i = 0; i < length; i++)
        f(array[i]);
}

template <typename T>
void    print(T const &a)
{
    std::cout << a << std::endl;
}

template <typename T>
void    sumOne(T const &a)
{
    std::cout << a + 1 << std::endl;
}
#endif