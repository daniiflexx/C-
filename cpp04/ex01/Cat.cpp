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

Cat::Cat(Cat & ref) : Animal(ref){
	this->type = ref.getType();
    this->brain = new Brain(*(ref.getBrain()));
	std::cout << "A cat was constructed from copy\n";
}

Cat& Cat::operator=(Cat& an) {
    this->type = an.type;
    if (this->brain)
		delete (this->brain);
	this->brain = new Brain(*(an.getBrain()));
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meowwww meow" << std::endl;
}

Brain* Cat::getBrain() const {
    return this->brain;
}
