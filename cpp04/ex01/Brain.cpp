/**
 * @file Brain.cpp
 * @author dcruz-na
 * @brief Brain implementation
 * @version 0.1
 * @date 2023-05-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor" << std::endl;
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = "";
    }
}

Brain::~Brain() {
    std::cout << "Brain destructor" << std::endl;
    delete [] this->ideas;
}

Brain::Brain(Brain& an) {
    std::cout << "Brain copy constructor" << std::endl;
    *this = an;
}

Brain& Brain::operator=(Brain& an) {
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = an.ideas[i];
    }
    return *this;
}

void Brain::setIdea(int i, std::string idea) {
    this->ideas[i] = idea;
}

std::string Brain::getIdea(int i) const {
    return this->ideas[i];
}
