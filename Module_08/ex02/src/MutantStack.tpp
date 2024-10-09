#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &source) : std::stack<T>(source)
{
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T> &source)
{
    std::stack<T>::operator=(source);
    return *this;
}
