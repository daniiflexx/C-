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

class AAnimal {
    protected:
        std::string type;
        AAnimal();
        AAnimal(AAnimal& an);
    public:
        virtual ~AAnimal();
        AAnimal& operator=(AAnimal& an);
        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif