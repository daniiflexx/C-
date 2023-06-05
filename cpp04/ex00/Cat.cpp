/**
 * @file  Cat.cpp
 * @author dcruz-na
 * @brief Cat implementation
 * @version 0.1
 * @date 2023-05-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor" << std::endl ;
    this->type = "Cat";
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(Cat & ref) {
	std::cout << "Cat copy constructor\n";
	*this = ref;
}

void Cat::makeSound() const {
    std::cout << "Meowwww meow" << std::endl;
}
