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
        Fixed &operator+(const Fixed &fixed);
        Fixed &operator-(const Fixed &fixed);
        Fixed &operator*(const Fixed &fixed);
        Fixed &operator/(const Fixed &fixed);
        Fixed &operator++(void);
        Fixed &operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);
        bool operator>(const Fixed &fixed) const;
        bool operator<(const Fixed &fixed) const;
        bool operator>=(const Fixed &fixed) const;
        bool operator<=(const Fixed &fixed) const;
        bool operator==(const Fixed &fixed) const;
        bool operator!=(const Fixed &fixed) const;
        static Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(const Fixed &a, const Fixed &b);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

#endif