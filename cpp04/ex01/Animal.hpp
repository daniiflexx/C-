/**
 * @file Animal.hpp
 * @author dcruz-na
 * @brief animal header
 * @version 0.1
 * @date 2023-05-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal& an);
        virtual ~Animal();
        Animal& operator=(Animal& an);
        virtual void makeSound() const;
        std::string getType() const;
};

#endif