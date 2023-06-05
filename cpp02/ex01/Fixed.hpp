/**
 * @file Fixed.hpp
 * @author dcruz-na
 * @brief Fixed header
 * @version 0.1
 * @date 2023-04-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
    private:
        int value;
        static const int fractional_bits = 8;
    public:
        Fixed();
        Fixed(int const value);
        Fixed(float const value);
        Fixed(const Fixed &fixed);
        ~Fixed();
        Fixed &operator=(const Fixed &fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream &os, const Fixed& fixed);


#endif