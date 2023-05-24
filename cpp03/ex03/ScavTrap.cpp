/**
 * @file ScavTrap.cpp
 * @author dcruz-na
 * @brief 
 * @version 0.1
 * @date 2023-05-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "ScavTrap.hpp"

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl ;
}

ScavTrap::ScavTrap() : ClapTrap("Doe", 100, 50, 20) {
    std::cout << "ScavTrap constructor called" << std::endl ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
    std::cout << "ScavTrap constructor called" << std::endl ;
}

ScavTrap::ScavTrap(ScavTrap& scav) : ClapTrap(scav) {
    std::cout << "ScavTrap copy constructor called" << std::endl ;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl ;
}

void ScavTrap::attack(const std::string& target) {
    std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}
