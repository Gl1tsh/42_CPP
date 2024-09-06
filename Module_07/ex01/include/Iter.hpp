#ifndef ITER_HPP
#define ITER_HPP

template <typename Type>
void print(Type const &x)
{
	std::cout << x;
}

// vu que j'ai une fonction print, iter va print tout les elements du tableau un par un
template <typename Type>
void iter(Type *array, int lenght, void (*function)(Type const &))
{
	for (int i = 0; i < lenght; i++)
	{
		function(array[i]);
	}
}


#endif