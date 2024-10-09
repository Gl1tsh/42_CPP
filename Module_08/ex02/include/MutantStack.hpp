#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

// std stack est une classe template, donc on doit aussi en faire une classe template
// on hérite de std::stack pour avoir accès à toutes ses méthodes (a la fin de stack, il faut ajouter le T)
template<typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	// tout les constructeur de stack, sont pas de 98)
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack<T, Container> &source);
	// l'operateur d'affection existe aussi dans stack
	MutantStack<T, Container>& operator=(const MutantStack<T, Container> &source);

	typedef typename Container::iterator iterator;

	iterator begin();
	iterator end();

private:


};

#endif