/**
 * @file MateriaSource.cpp
 * @author dcruz-na
 * @brief MatericaSource implementation
 * @version 0.1
 * @date 2023-06-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : _count(0)
{
    std::cout << "Default constructor for MateriaSource" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
    *this = src;
    std::cout << "Copy constructor for MateriaSource" << std::endl;
}

MateriaSource::~MateriaSource( void )
{
    std::cout << "Default destructor for MateriaSource" << std::endl;
    for (int i = 0; i < 4; i++)
        if (this->_materia[i])
            delete this->_materia[i];
}

MateriaSource& MateriaSource::operator=( MateriaSource const & src )
{
    if (this != &src)
    {
        this->_count = src._count;
        for (int i = 0; i < 4; i++)
            this->_materia[i] = src._materia[i];
    }
    return *this;
}

void MateriaSource::learnMateria( AMateria* m )
{
    if (this->_count < 4)
    {
        this->_materia[this->_count] = m;
        this->_count++;
    }
}

AMateria* MateriaSource::createMateria( std::string const & type )
{
    for (int i = 0; i < 4; i++)
        if (this->_materia[i] && this->_materia[i]->getType() == type)
            return this->_materia[i]->clone();
    return NULL;
}