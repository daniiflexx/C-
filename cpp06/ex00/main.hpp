/**
 * @file main.hpp
 * @author dcruz-na
 * @brief header file for converter program
 * @version 0.1
 * @date 2023-07-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <climits>
# include <cfloat>
# include <cmath>
# include <cstring>

typedef enum e_type
{
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    INVALID
} t_type;

typedef				void (*converter)(std::string const& str);

t_type  getType(std::string str);
void    convertFromChar(std::string const& str);
void    convertFromInt(std::string const& str);
void    convertFromFloat(std::string const& str);
void    convertFromDouble(std::string const& str);


#endif