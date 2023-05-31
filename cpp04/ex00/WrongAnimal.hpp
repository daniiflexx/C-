/**
 * @file Animal.hpp
 * @author dcruz-na
 * @brief WrongAnimal header
 * @version 0.1
 * @date 2023-05-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal& an);
        ~WrongAnimal();
        WrongAnimal& operator=(WrongAnimal& an);
        void makeSound() const;
        std::string getType() const;
};

#endif