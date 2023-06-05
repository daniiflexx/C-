/**
 * @file Character.hpp
 * @author dcruz-na
 * @brief Character implementation
 * @version 0.1
 * @date 2023-06-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>

# include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria*   _inventory[4];

    public:
        Character();
        Character(std::string const & name);
        Character(Character const & src);
        ~Character();
        Character & operator=(Character const & src);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif