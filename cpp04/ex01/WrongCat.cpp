/**
 * @file  Cat.cpp
 * @author dcruz-na
 * @brief WrongCat implementation
 * @version 0.1
 * @date 2023-05-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat default constructor" << std::endl ;
    this->type = "WrongCat";
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(WrongCat& an) : WrongAnimal(an){
    std::cout << "WrongCat copy constructor" << std::endl;
    this->type = an.getType();
}

WrongCat& WrongCat::operator=(WrongCat& an) {
    this->type = an.type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Meowwww meow" << std::endl;
}

