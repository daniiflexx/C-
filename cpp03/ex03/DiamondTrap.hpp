/**
 * @file DiamondTrap.hpp
 * @author dcruz-na
 * @brief DiamondTrap header file
 * @version 0.1
 * @date 2023-05-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    private:
        std::string name;
    
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap(DiamondTrap& diamond);
        DiamondTrap& operator=(DiamondTrap& diamond);
        void attack(const std::string& target);
        void whoAmI();
        std::string getName();
};      

#endif