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

Fixed &Fixed::operator+(const Fixed &fixed) {
    std::cout << "Addition operator called" << std::endl;
    value += roundf((fixed.toFloat() + this->toFloat()) * (1 << fractional_bits));
    return (*this);
}

Fixed &Fixed::operator-(const Fixed &fixed) {
    std::cout << "Subtraction operator called" << std::endl;
    value -= roundf((fixed.toFloat() - this->toFloat()) * (1 << fractional_bits));
    return (*this);
}

Fixed &Fixed::operator*(const Fixed &fixed) {
    std::cout << "Multiplication operator called" << std::endl;
    value *= roundf((fixed.toFloat() * this->toFloat()) * (1 << fractional_bits));
    return (*this);
}


Fixed &Fixed::operator/(const Fixed &fixed) {
    std::cout << "Division operator called" << std::endl;
    value /= roundf((fixed.toFloat() / this->toFloat()) * (1 << fractional_bits));
    return (*this);
}
bool Fixed::operator>(const Fixed &fixed) {
    return (value > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) {
    return (value < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) {
    return (value >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) {
    return (value <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) {
    return (value == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) {
    return (value != fixed.getRawBits());
}

Fixed &Fixed::operator++(int) {
    std::cout << "Post-increment operator called" << std::endl;
    Fixed *tmp = new Fixed(*this);
    value++;
    return (*tmp);
}

Fixed &Fixed::operator++() {
    std::cout << "Pre-increment operator called" << std::endl;
    value++;
    return (*this);
}

Fixed &Fixed::operator--(int) {
    std::cout << "Post-decrement operator called" << std::endl;
    Fixed *tmp = new Fixed(*this);
    value--;
    return (*tmp);
}

Fixed &Fixed::operator--() {
    std::cout << "Pre-decrement operator called" << std::endl;
    value--;
    return (*this);
}

Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b ? a : b);
}

Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b ? a : b);
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}

