/**
 * @file AMateria.cpp
 * @author dcruz-na
 * @brief AMateria 
 * @version 0.1
 * @date 2023-05-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default"), _xp(0) {
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)  : _type(type), _xp(0) {
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src) {
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = src;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
    std::cout << "AMateria assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
        this->_xp = rhs._xp;
    }
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

unsigned int AMateria::getXP() const
{
    return (this->_xp);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* shoots an Materia bolt at " << target.getName() << " *" << std::endl;
}
