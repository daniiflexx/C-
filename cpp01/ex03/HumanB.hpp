/**
 * @file HumanB.hpp
 * @author dcruz-na
 * @brief Class declaration for HumanB
 * @version 0.1
 * @date 2023-04-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon* weapon;
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void attack();
        void setWeapon(Weapon& weapon);
};

#endif