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

AMateria::AMateria( void ) : _type("")
{
    std::cout << "Default constructor for AMateria" << std::endl;
}

AMateria::AMateria( std::string const & type )  : _type(type)
{
    std::cout << "String constructor for AMateria" << std::endl;
}

AMateria::~AMateria( void )
{
    std::cout << "Default destructor for AMateria" << std::endl;
}

std::string const & AMateria::getType() const
{
    return this->_type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
