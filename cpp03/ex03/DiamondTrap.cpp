/**
 * @file DiamondTrap.cpp
 * @author dcruz-na
 * @brief DiamondTrap class
 * @version 0.1
 * @date 2023-05-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name", 100, 50, 30), ScavTrap(), FragTrap() {
    std::cout << "DiamondTrap constructor" << std::endl;
	this->name = "";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30), ScavTrap(), FragTrap() {
    std::cout << "DiamondTrap constructor" << std::endl;
	this->name = name;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& diamond) : ClapTrap(diamond), ScavTrap(diamond), FragTrap(diamond) {
    std::cout << "DiamondTrap copy constructor" << std::endl;
    *this = diamond;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& diamond) {
    std::cout << "DiamondTrap assignation operator" << std::endl;
    ClapTrap::operator=(diamond);
    this->name = diamond.name;
    return *this;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << this->name << std::endl;
    std::cout << "ClapTrap name: " << getName() << std::endl;
}

std::string DiamondTrap::getName() {
    return ClapTrap::getName();
}


