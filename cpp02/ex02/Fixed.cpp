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
    *this = fixed;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    value = fixed.getRawBits();
    return (*this);
}

Fixed   Fixed::operator+(const Fixed &fixed) {
    Fixed result(this->toFloat() + fixed.toFloat());
    return (result);
}

Fixed	Fixed::operator-(const Fixed &fixed) {
    Fixed result(this->toFloat() - fixed.toFloat());
    return (result);
}

Fixed	Fixed::operator*(const Fixed &fixed) {
    Fixed result(this->toFloat() * fixed.toFloat());
    return (result);
}

Fixed	Fixed::operator/(const Fixed &fixed) {
    Fixed result(this->toFloat() / fixed.toFloat());
    return (result);
}

bool Fixed::operator>(const Fixed &fixed) const{
    return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator<(const Fixed &fixed) const{
    return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator>=(const Fixed &fixed) const{
    return (this->toFloat() >= fixed.toFloat());
}

bool Fixed::operator<=(const Fixed &fixed) const{
    return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator==(const Fixed &fixed) const{
    return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator!=(const Fixed &fixed) const{
    return (this->toFloat() != fixed.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator++(int value)
{
	Fixed	aux;

	aux = *this;

	if (!value)
		value = 1;
	this->setRawBits(this->getRawBits() + value);
	return (aux);
}

Fixed	Fixed::operator--(int value)
{
	Fixed	aux;

	aux = *this;

	if (!value)
		value = 1;
	this->setRawBits(this->getRawBits() - value);
	return (aux);
}   

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b ? a : b);
}

int Fixed::getRawBits(void) const {
    return (value);
}

void Fixed::setRawBits(int const raw) {
    value = raw;
}

