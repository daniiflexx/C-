/**
 * @file HumanA.hpp
 * @author dcruz-na
 * @brief Class declaration for HumanA
 * @version 0.1
 * @date 2023-04-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon& weapon;
    public:
        HumanA(std::string name, Weapon& weapon);
        void attack();
};

#endif