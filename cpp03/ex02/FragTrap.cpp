/**
 * @file FragTrap.cpp
 * @author dcruz-na
 * @brief FragTrap class
 * @version 0.1
 * @date 2023-05-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Doe", 100, 100, 30) {
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
    std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap& frag) : ClapTrap(frag) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& frag) {
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->setName(frag.getName());
    this->setAttackDamage(frag.getAttackDamage());
    this->setHitPoints(frag.getHitPoints());
    this->setEnergyPoints(frag.getEnergyPoints());
    return (*this);
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << this->getName() << " wants to high five" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}
