/**
 * @file main.cpp
 * @author dcruz-na
 * @brief main for testing the class
 * @version 0.1
 * @date 2023-05-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clap2;
    ClapTrap clap("John");
    ClapTrap clap3(clap);
    clap.attack("Anonimous");
    clap.takeDamage(3);
    clap.beRepaired(4);
    clap2 = clap;
    std::cout << "[" << clap2.getName() << ", with " << clap2.getHitPoints() << " hit points!]" << std::endl ;
    std::cout << "[" << clap3.getName() << ", with " << clap3.getHitPoints() << " hit points!]" << std::endl ;

}