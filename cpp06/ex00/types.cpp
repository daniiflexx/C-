/**
 * @file types.cpp
 * @author dcruz-na
 * @brief Types for converter program
 * @version 0.1
 * @date 2023-07-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "main.hpp"

t_type getType(std::string str)
{
    int i = 0;
    int dot = 0;
    int sign = 0;
    int digit = 0;
    int len = str.length();

    if (len == 1 && !isdigit(str[0]))
        return (CHAR);
    if (str[i] == '+' || str[i] == '-')
    {
        sign++;
        i++;
    }
    while (i < len)
    {
        if (str[i] == '.')
            dot++;
        else if (isdigit(str[i]))
            digit++;
        else
            return (INVALID);
        i++;
    }
    if (dot == 1 && digit > 0)
        return (FLOAT);
    else if (dot == 0 && digit > 0)
        return (INT);
    else
        return (INVALID);
}