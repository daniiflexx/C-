/**
 * @file main.cpp
 * @author dcruz-na
 * @brief main file for converter program
 * @version 0.1
 * @date 2023-07-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <unistd.h>
#include "main.hpp"
#define stringify( name ) #name
int main(int argc, char **argv)
{
    t_type type;
    converter convert[4] = {convertFromChar, convertFromInt, convertFromFloat, convertFromDouble};
    if (argc != 2)
    {
        std::cout << "Error: invalid number of arguments" << std::endl;
        return (1);
    }
    type = getType(argv[1]);
    std::cout << type << std::endl;
    if (type > 3)
    {
        std::cout << "Error: invalid argument" << std::endl;
        return (1);
    }
        convert[type](argv[1]);
    return (0);
}