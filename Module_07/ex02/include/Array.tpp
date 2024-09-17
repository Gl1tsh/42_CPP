#include "Array.hpp"
#include <exception>

template<typename T>
Array<T>::Array()
{
	this->array = new T[0];
	this->arraySize = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->array = new T[n];
	this->arraySize = n;
}

template<typename T>
Array<T>::~Array()
{
	delete [] this->array;
}

template<typename T>
Array<T>::Array(const Array &source)
{
	this->array = new T[source.size()];
	for (int i = 0; i < source.size(); i++)
	{
		this->array[i] = source[i];
	}
	this->arraySize = source.size();
}

template<typename T>
Array<T>& Array<T>::operator=(const Array &source)
{
	delete [] this->array;

	this->array = new T[source.size()];
	for (int i = 0; i < source.size(); i++)
	{
		this->array[i] = source[i];
	}
	this->arraySize = source.size();
	return *this;
}

// operator pour acceder a un element du tableau de type T (ce qu'on veux : string, char int et autre)
template<typename T>
T& Array<T>::operator[](int index) const
{
	if (index < 0 || index >= this->arraySize)
		throw std::exception();
	return this->array[index];
}

template<typename T>
int Array<T>::size() const
{
	return this->arraySize;
}
