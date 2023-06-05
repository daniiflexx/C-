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
    this->brain = new Brain();
    this->type = "Dog";
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
    delete this->brain;
}

Dog::Dog(Dog& an) {
    std::cout << "Dog copy constructor" << std::endl;
    this->brain = new Brain();
    *this = an;
}

Dog& Dog::operator=(Dog& an) {
    std::cout << "Dog assignation operator" << std::endl;
    this->AAnimal::operator=(an);
    *this->brain = *an.brain;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "WOOF WOOF" << std::endl;
}

Brain* Dog::getBrain() const {
    return this->brain;
}