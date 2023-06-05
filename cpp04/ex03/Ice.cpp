/**
 * @file Ice.cpp
 * @author dcruz-na
 * @brief Ice implementation
 * @version 0.1
 * @date 2023-06-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
    std::cout << "Ice constructor" << std::endl;
}

Ice::Ice( Ice const & src )
{
    *this = src;
}

Ice::~Ice( void )
{
    std::cout << "Ice destructor" << std::endl;
}

Ice & Ice::operator=( Ice const & src )
{
    this->_type = src._type;
    return *this;
}

AMateria*   Ice::clone() const
{
    return new Ice(*this);
}

void        Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
