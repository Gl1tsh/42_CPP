#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = other.value;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << frac_bit;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int(roundf(value)) << frac_bit) | int((value - roundf(value)) / low_frac_value);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = other.value;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& value)
{
    os << value.toFloat();
    return os;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "Default constructor called" << std::endl;
	value = raw;
}

float Fixed::toFloat() const
{
	float float_value = (this->value >> frac_bit);
	float_value += (this->value & ((1 << frac_bit) - 1)) * low_frac_value;
	return float_value;
}

int Fixed::toInt() const
{
	return this->value >> frac_bit;
}

