#include "Fixed.hpp"
#include <iostream>

int main()
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(185.56f);

	std::cout << (b+c) << std::endl;
	std::cout << (b-c) << std::endl;
	std::cout << (b*c) << std::endl;
	std::cout << (b/c) << std::endl;
	
	std::cout << (b==c) << std::endl;
	std::cout << (b!=c) << std::endl;
	std::cout << (b<=c) << std::endl;
	std::cout << (b>=c) << std::endl;
	std::cout << (b<c) << std::endl;
	std::cout << (b>c) << std::endl;
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}
