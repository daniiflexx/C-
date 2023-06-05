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
    this->brain = new Brain();
    this->type = "Cat";
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
    delete this->brain;
}

Cat::Cat(Cat & ref) {
	std::cout << "Cat copy constructor\n";
    this->brain = new Brain();
	*this = ref;
}

Cat& Cat::operator=(Cat& an) {
    std::cout << "Cat assignation operator" << std::endl;
    this->Animal::operator=(an);
	*this->brain = *an.brain;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meowwww meow" << std::endl;
}

Brain* Cat::getBrain() const {
    return this->brain;
}
