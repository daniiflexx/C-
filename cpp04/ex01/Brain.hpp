/**
 * @file Brain.hpp
 * @author dcruz-na
 * @brief Brain header file
 * @version 0.1
 * @date 2023-05-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
    private:
        std::string *ideas;
    public:
        Brain();
        Brain(Brain& an);
        ~Brain();
        Brain& operator=(Brain& an);
        std::string getIdea(int i) const;
        void setIdea(int i, std::string idea);
};

#endif