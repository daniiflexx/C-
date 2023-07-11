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

int main(int argc, char **argv)
{
    std::string str;
    t_type type;
    converter convert[4] = {convertFromChar, convertFromInt, convertFromFloat, convertFromDouble};
    if (argc != 2)
    {
        std::cerr << "Error: invalid number of arguments" << std::endl;
        return (1);
    }
    type = getType(argv[1]);
    if (type > 3)
    {
        if (str.compare("nan") || str.compare("nanf"))
            std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl << "float: nanf" << std::endl << "double: nan" << std::endl;
        else if (str.compare("+inf") || str.compare("+inff"))
            std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl << "float: +inff" << std::endl << "double: +inf" << std::endl;
        else if (str.compare("-inf") || str.compare("-inff"))
            std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl << "float: -inff" << std::endl << "double: -inf" << std::endl;
        else
            std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl << "float: impossible" << std::endl << "double: impossible" << std::endl;
        return (1);
    }
    convert[type](argv[1]);
    return (0);
}