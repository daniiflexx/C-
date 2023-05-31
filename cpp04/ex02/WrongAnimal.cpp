/**
 * @file Animal.cpp
 * @author dcruz-na
 * @brief WrongAnimal implementation
 * @version 0.1
 * @date 2023-05-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal default constructor" << std::endl;
    this->type = "";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& an) {
    *this = an;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& an) {
    this->type = an.type;
    return *this;
}

std::string WrongAnimal::getType() const {
    return this->type;
}

void WrongAnimal::makeSound() const {
    std::cout << "***WrongAnimal sound here***";
    std::cout << std::endl;
}