/**
 * @file main.cpp
 * @author dcruz-na
 * @brief Print the address of a string and the address of a pointer to a string and the address of a reference to a string.
 * @version 0.1
 * @date 2023-04-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

int main()
{
    std::string     str = "HI THIS IS BRAIN";
    std::string     *stringPTR = &str;
    std::string		&stringREF = str;

	std::cout << &str << "\n" << stringPTR << "\n" << &stringREF << "\n";
	std::cout << str << "\n" << *stringPTR << "\n" << stringREF << "\n";
}