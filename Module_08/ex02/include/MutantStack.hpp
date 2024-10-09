#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

// std stack est une classe template, donc on doit aussi en faire une classe template
template <typename T>
// on hérite de std::stack pour avoir accès à toutes ses méthodes (a la fin de stack, il faut ajouter le T)
class MutantStack : public std::stack<T>
{
public:
	// tout les constructeur de stack, sont pas de 98)
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack<T> &source);
	// l'operateur d'affection existe aussi dans stack
	MutantStack<T>& operator=(const MutantStack<T> &source);


private:


};

#endif