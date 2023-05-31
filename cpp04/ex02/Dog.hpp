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

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
    private:
        Brain* brain;

    public:
        Dog();
        ~Dog();
        Dog(Dog& an);
        Dog& operator=(Dog& an);
        void makeSound() const;
        Brain* getBrain() const;
};

#endif