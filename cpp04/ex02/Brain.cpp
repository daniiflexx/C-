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
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = "";
    }
}

Brain::~Brain() {
    std::cout << "Brain destructor" << std::endl;
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
