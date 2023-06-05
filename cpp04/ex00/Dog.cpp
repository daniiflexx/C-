/**
 * @file  Cat.cpp
 * @author dcruz-na
 * @brief Dog implementation
 * @version 0.1
 * @date 2023-05-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog default constructor" << std::endl ;
    this->type = "Dog";
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(Dog& an) {
    std::cout << "Dog copy constructor" << std::endl;
    *this = an;
}

void Dog::makeSound() const {
    std::cout << "WOOF WOOF" << std::endl;
}
