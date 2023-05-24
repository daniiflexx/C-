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
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    std::cout << std::endl << "NOW WITH SCAVTRAP" << std::endl << std::endl;

    ScavTrap scav2;
    ScavTrap scav("John");
    ScavTrap scav3(scav);
    scav.attack("Anonimous");
    scav.takeDamage(3);
    scav.beRepaired(4);
    scav2 = scav;
    std::cout << "[" << scav2.getName() << ", with " << scav2.getHitPoints() << " hit points!]" << std::endl ;
    std::cout << "[" << scav3.getName() << ", with " << scav3.getHitPoints() << " hit points!]" << std::endl ;
    scav.guardGate();

    std::cout << std::endl << "NOW WITH FRAGTRAP" << std::endl << std::endl;

    FragTrap frag2;
    FragTrap frag("John");
    FragTrap frag3(frag);
    frag.attack("Anonimous");
    frag.takeDamage(3);
    frag.beRepaired(4);
    frag2 = frag;
    std::cout << "[" << frag2.getName() << ", with " << frag2.getHitPoints() << " hit points!]" << std::endl ;
    std::cout << "[" << frag3.getName() << ", with " << frag3.getHitPoints() << " hit points!]" << std::endl ;
    frag.highFivesGuys();
}