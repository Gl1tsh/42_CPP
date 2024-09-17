#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>

// Template : aguille (needle) dans botte de foin (haystack)
template <typename Type>
int easyfind(Type& haystack, int needle)
{
	int i = 0;
	// obliger de mettre typename Type pour que le compilateur sache que c'est le type cibler, il peux etre list, vector.
	for (typename Type::iterator it = haystack.begin(); it != haystack.end(); it++)
	{
		if ((*it) == needle)
			return i;
		i++;
	}
	throw std::exception();
}

#endif