/**
 * @file main.hpp
 * @author dcruz-na
 * @brief main header file
 * @version 0.1
 * @date 2023-07-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <cfloat>
#include <cmath>
#include <cstring>


typedef struct s_data
{
    std::string s1;
    int         n;
    std::string s2;
} Data;

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif