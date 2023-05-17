/**
 * @file Fixed.cpp
 * @author dcruz-na
 * @brief Fixed implementation
 * @version 0.1
 * @date 2023-04-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed(int const value) {
    std::cout << "Int constructor called" << std::endl;
    this->value = value << fractional_bits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

Fixed::Fixed(float const value) {
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << fractional_bits));
}

float Fixed::toFloat(void) const {
    return ((float)value / (float)(1 << fractional_bits));
}

int Fixed::toInt(void) const {
    return (value >> fractional_bits);
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    value = fixed.getRawBits();
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Assignation operator called" << std::endl;
    value = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}

