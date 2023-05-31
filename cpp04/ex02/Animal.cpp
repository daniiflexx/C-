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

#include "AAnimal.hpp"

AAnimal::AAnimal() {
    std::cout << "AAnimal default constructor" << std::endl;
    this->type = "";
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor" << std::endl;
}

AAnimal::AAnimal(AAnimal& an) {
    *this = an;
}

AAnimal& AAnimal::operator=(AAnimal& an) {
    this->type = an.type;
    return *this;
}

std::string AAnimal::getType() const {
    return this->type;
}

void AAnimal::makeSound() const {
    std::cout << "***AAnimal sound here***";
    std::cout << std::endl;
}

std::ostream& operator<<(std::ostream& os, const AAnimal& an) {
    os << an.getType();
    return os;
}

