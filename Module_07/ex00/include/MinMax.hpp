#ifndef MINMAX_HPP
#define MINMAX_HPP

// Template pour min
template <typename Type>
Type min(Type& a, Type& b)
{
	return (a < b) ? a : b;
}

// Template pour max
template <typename Type>
Type max(Type& a, Type& b)
{
	return (a > b) ? a : b;
}

#endif