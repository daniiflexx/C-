/**
 * @file Cat.hpp
 * @author dcruz-na
 * @brief WrongCat header file
 * @version 0.1
 * @date 2023-05-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(WrongCat& an);
        void makeSound() const;
};

#endif