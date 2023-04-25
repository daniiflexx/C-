/**
 * @file weapon.cpp
 * @author dcruz-na
 * @brief  Weapon class implementation
 * @version 0.1
 * @date 2023-04-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
    
}

Weapon::~Weapon(void) {

}

const std::string &Weapon::getType(void) {
    return this->_type;
}

void Weapon::setType(std::string type) {
    this->_type = type;
}