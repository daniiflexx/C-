/**
 * @file Harl.hpp
 * @author dcruz-na
 * @brief harl header
 * @version 0.1
 * @date 2023-04-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
#include <map>

class Harl {
    private:
        typedef void (Harl::*Action)();
        void debug();
        void info();
        void warning();
        void error();
        Action actions[23];

    public:
        Harl();
        void complain(std::string level);
        
};

#endif // HARL_HPP