#ifndef MINMAX_HPP
#define MINMAX_HPP

// Template pour min
template <typename Type>
Type min(Type& a, Type& b)
{
	// Si a est plus petit que b, on retourne a
	// si b est plus petit que a, on retourne b
	// si a et b egaux, on retourne b
	return (a < b) ? a : b;
}

// Template pour max
template <typename Type>
Type max(Type& a, Type& b)
{
	// Si a est plus grand que b, on retourne a
	// si b est plus grand que a, on retourne b
	// si a et b egaux, on retourne b
	return (a > b) ? a : b;
}

#endif