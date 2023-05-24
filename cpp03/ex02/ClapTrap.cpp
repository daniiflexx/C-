/**
 * @file ClapTrap.cpp
 * @author dcruz-na
 * @brief ClapTrap implementation
 * @version 0.1
 * @date 2023-05-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap constructor called" << std::endl ;
    this->name = "Doe";
    this->hitPoints = 10;
    this->attackDamage = 0;
    this->energyPoints = 10;
}

ClapTrap::ClapTrap(std::string name) {
    std::cout << "ClapTrap constructor called" << std::endl ;
    this->name = name;
    this->hitPoints = 10;
    this->attackDamage = 0;
    this->energyPoints = 10;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) {
    std::cout << "ClapTrap constructor called" << std::endl ;
    this->name = name;
    this->hitPoints = hitPoints;
    this->attackDamage = attackDamage;
    this->energyPoints = energyPoints;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called" << std::endl ;
}

ClapTrap::ClapTrap(ClapTrap& clap) {
    std::cout << "ClapTrap copy constructor called" << std::endl ;
    *this = clap;
}

ClapTrap& ClapTrap::operator=(ClapTrap& clap) {
    this->name = clap.getName();
    this->attackDamage = clap.getAttackDamage();
    this->hitPoints = clap.getHitPoints();
    this->energyPoints = clap.getEnergyPoints();
    return (*this);
}

void ClapTrap::attack(const std::string& target) {
    if (!this->hitPoints || !this->energyPoints)
        return ;
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount) {
    int lost, hit;

    if (!this->hitPoints || !this->energyPoints)
        return;
    lost = amount;
    hit = hitPoints;
    if (amount > (unsigned int)this->hitPoints) {
        lost = this->hitPoints;
        this->hitPoints = 0;
    }
    if (this->hitPoints > 0)
        this->hitPoints -= amount;
    std::cout << "ClapTrap " << this->name << ", with " << hit << " hit points," << " takes damage, losing " << lost << "!" << std::endl;

}
void ClapTrap::beRepaired(unsigned int amount) {
    if (!this->hitPoints || !this->energyPoints)
        return;
    std::cout << "ClapTrap " << this->name << ", with " << hitPoints << ", repairs, getting " << amount << " hitPoints back!" << std::endl;
    this->hitPoints += amount;
    this->energyPoints--;

}

std::string ClapTrap::getName() {
    return (name);
}

unsigned int ClapTrap::getAttackDamage() {
    return (attackDamage);
}

unsigned int ClapTrap::getHitPoints() {
    return (hitPoints);
}

unsigned int ClapTrap::getEnergyPoints() {
    return (energyPoints);
}

void ClapTrap::setAttackDamage(unsigned int attackDamage) {
    this->attackDamage = attackDamage;
}

void ClapTrap::setHitPoints(unsigned int hitPoints) {
    this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
    this->energyPoints = energyPoints;
}

void ClapTrap::setName(std::string name) {
    this->name = name;
}
