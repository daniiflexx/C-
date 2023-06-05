/**
 * @file AMateria.hpp
 * @author your name (you@domain.com)
 * @brief Abstract materia class
 * @version 0.1
 * @date 2023-05-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
    std::string _type;
    public:
        AMateria();
        AMateria(std::string const & type);
        virtual ~AMateria();
        std::string const & getType() const;
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
};

#endif