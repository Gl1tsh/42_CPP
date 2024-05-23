#include "Fixed.hpp"
#include <iostream>
#include <cmath>

// Constructor ===============

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
	this->value = roundf(value * (1 << frac_bit));
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


// arithmetic operator ===============

Fixed Fixed::operator+(const Fixed& right) const
{
	Fixed answer;
	answer.setRawBits(this->value + right.value);
	return answer;
}

Fixed Fixed::operator-(const Fixed& right) const
{
	Fixed answer;
	answer.setRawBits(this->value - right.value);
	return answer;
}

Fixed Fixed::operator*(const Fixed& right) const
{
	return Fixed(this->toFloat() * right.toFloat());
}

Fixed Fixed::operator/(const Fixed& right) const
{
	return Fixed(this->toFloat() / right.toFloat());
}



// comparison operator ===============

bool Fixed::operator==(const Fixed& right) const
{
	return this->value == right.value;
}

bool Fixed::operator!=(const Fixed& right) const
{
	return this->value != right.value;
}

bool Fixed::operator<=(const Fixed& right) const
{
	return this->value <= right.value;
}

bool Fixed::operator>=(const Fixed& right) const
{
	return this->value >= right.value;
}

bool Fixed::operator<(const Fixed& right) const
{
	return this->value < right.value;
}

bool Fixed::operator>(const Fixed& right) const
{
	return this->value > right.value;
}



// incrementation operator ===============

Fixed& Fixed::operator++()
{
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed answer(*this);
	this->value++;
	return answer;
}

Fixed& Fixed::operator--()
{
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed answer(*this);
	this->value--;
	return answer;
}


// min max ===============

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return a < b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return a > b ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return a < b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return a > b ? a : b;
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
	return ((float)value) / (1 << frac_bit);
}

int Fixed::toInt() const
{
	return this->value >> frac_bit;
}

