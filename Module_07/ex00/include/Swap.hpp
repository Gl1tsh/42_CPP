#ifndef SWAP_HPP
#define SWAP_HPP

// Template pour swap
template <typename Type>
void swap(Type& a, Type& b)
{
	Type temp = a;
	a = b;
	b = temp;
}

#endif