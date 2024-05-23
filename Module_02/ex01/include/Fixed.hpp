#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed& other);	
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	Fixed& operator=(const Fixed& other);
    friend std::ostream& operator<<(std::ostream& os, const Fixed& value);

	float toFloat() const;
	int toInt() const;
	int getRawBits() const;
	void setRawBits(int const raw);

private:
	int value;
	const static int frac_bit = 8;
	//cannot do this because of GNU extension : const static float low_frac_value = 0.00390625; // this value is 2 power -(frac_bit)
	#define low_frac_value 0.00390625 // this value is 2 power -(frac_bit)

};

#endif
