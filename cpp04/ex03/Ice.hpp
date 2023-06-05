/**
 * @file Ice.hpp
 * @author dcruz-na
 * @brief Ice header
 * @version 0.1
 * @date 2023-06-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>

# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const & src);
        ~Ice();
        Ice & operator=(Ice const & src);
        AMateria*   clone() const;
        void        use(ICharacter& target);
};

#endif