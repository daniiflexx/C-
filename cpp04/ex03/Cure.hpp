/**
 * @file Cure.hpp
 * @author dcruz-na
 * @brief Cure header
 * @version 0.1
 * @date 2023-06-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>

# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const & src);
        ~Cure();
        Cure & operator=(Cure const & src);
        AMateria*   clone() const;
        void        use(ICharacter& target);
};

#endif