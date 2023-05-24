/**
 * @file FragTrap.hpp
 * @author dcruz-na
 * @brief fragtrap header file
 * @version 0.1
 * @date 2023-05-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        void highFivesGuys();
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(FragTrap& frag);
        FragTrap& operator=(FragTrap& frag);
        void attack(const std::string& target);
};

#endif