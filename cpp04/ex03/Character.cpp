/**
 * @file Character.cpp
 * @author dcruz-na
 * @brief Character implementation
 * @version 0.1
 * @date 2023-06-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Character.hpp"

Character::Character( std::string const & name ) : _name(name)
{
    for (int i = 0; i < 4; i++) {
        this->_inventory[i] = NULL;
    }
    std::cout << "Character " << this->_name << " created" << std::endl;
}

Character::Character( Character const & src ) : _name(src._name)
{
    *this = src;
    std::cout << "Character " << this->_name << " created" << std::endl;
}

Character& Character::operator=( Character const & src )
{
    if (this != &src)
    {
        this->_name = src._name;
        for (int i = 0; i < 4; i++)
            this->_inventory[i] = src._inventory[i];
    }
    return *this;
}

Character::~Character()
{
    std::cout << "Character " << this->_name << " destroyed" << std::endl;
    for (int i = 0; i < 4; i++)
        if (this->_inventory[i])
            delete this->_inventory[i];
}

void    Character::equip( AMateria* m ) {
    for (int i = 0; i < 4; i++)
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            std::cout << "Character " << this->_name << " equipped with " << m->getType() << std::endl;
            return;
        }
    std::cout << "Character " << this->_name << " can't equip " << m->getType() << std::endl;
}

void    Character::unequip( int idx ) {
    if (this->_inventory[idx])
    {
        delete this->_inventory[idx];
        this->_inventory[idx] = NULL;
        std::cout << "Character " << this->_name << " unequipped" << std::endl;
    }
    else
        std::cout << "Character " << this->_name << " can't unequip" << std::endl;
}

void    Character::use( int idx, ICharacter& target ) {
    if (this->_inventory[idx])
    {
        this->_inventory[idx]->use(target);
        std::cout << "Character " << this->_name << " uses " << this->_inventory[idx]->getType() << std::endl;
    }
    else
        std::cout << "Character " << this->_name << " can't use" << std::endl;
}

std::string const& Character::getName() const {
    return this->_name;
}