/**
 * @file Cat.hpp
 * @author dcruz-na
 * @brief Dog header file
 * @version 0.1
 * @date 2023-05-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        ~Dog();
        Dog(Dog& an);
        void makeSound() const;
};

#endif