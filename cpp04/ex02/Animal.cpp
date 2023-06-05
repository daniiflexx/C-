/**
 * @file Animal.cpp
 * @author dcruz-na
 * @brief animal implementation
 * @version 0.1
 * @date 2023-05-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal default constructor" << std::endl;
    this->type = "";
}

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(Animal& an) {
    *this = an;
}

Animal& Animal::operator=(Animal& an) {
    this->type = an.type;
    return *this;
}

std::string Animal::getType() const {
    return this->type;
}

void Animal::makeSound() const {
    std::cout << "***Animal sound here***";
    std::cout << std::endl;
}