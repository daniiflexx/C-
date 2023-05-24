/**
 * @file ClapTrap.hpp
 * @author dcruz-na
 * @brief ClapTrap header file
 * @version 0.1
 * @date 2023-05-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    private:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(ClapTrap& clap);
        ClapTrap& operator=(ClapTrap& clap);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName();
        unsigned int getHitPoints();
        unsigned int getEnergyPoints();
        unsigned int getAttackDamage();
};

#endif