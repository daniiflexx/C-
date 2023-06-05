/**
 * @file Cure.cpp
 * @author dcruz-na
 * @brief Cure implementation
 * @version 0.1
 * @date 2023-06-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
    std::cout << "Cure constructor" << std::endl;
}

Cure::Cure( Cure const & src )
{
    *this = src;
}

Cure::~Cure( void )
{
    std::cout << "Cure destructor" << std::endl;
}

Cure & Cure::operator=( Cure const & src )
{
    this->_type = src._type;
    return *this;
}

AMateria*   Cure::clone() const
{
    return new Cure(*this);
}

void        Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
