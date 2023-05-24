/**
 * @file ScavTrap.hpp
 * @author dcruz-na
 * @brief ScavTrap header file
 * @version 0.1
 * @date 2023-05-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        void guardGate();
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(ScavTrap& scav);
        ScavTrap& operator=(ScavTrap& scav);
        void attack(const std::string& target);
};

#endif