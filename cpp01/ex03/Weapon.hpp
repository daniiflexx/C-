/**
 * @file Weapon.h
 * @author dcruz-na
 * @brief Weapon class declaration
 * 
 */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon {
    private:
        std::string _type;
    public:
        Weapon(std::string type);
        ~Weapon(void);
        const std::string &getType(void);
        void setType(std::string type);
};

#endif