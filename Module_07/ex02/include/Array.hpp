#ifndef ARRAY_HPP
#define ARRAY_HPP


// cree des objets du type que l'on veux (int Array, char Array, string Array)
template<typename T> 
class Array
{
public:
	Array();
	Array(unsigned int n);
	~Array();
	Array(const Array &source);
	Array& operator=(const Array &source);

	// operator pour acceder a un element du tableau de type T (ce qu'on veux : string, char int et autre)
	T& operator[](int index) const;
	int size() const;

private:
	T *array;
	int arraySize;

};

#endif