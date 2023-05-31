/**
 * @file Cat.hpp
 * @author dcruz-na
 * @brief Cat header file
 * @version 0.1
 * @date 2023-05-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain* brain;
    
    public:
        Cat();
        ~Cat();
        Cat(Cat& an);
        Cat& operator=(Cat& an);
        void makeSound() const;
        Brain* getBrain() const;
};

#endif