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
	MutantStack() {};
	~MutantStack() {};
	MutantStack(const MutantStack<T, Container> &source) { *this = source; };
	// l'operateur d'affection existe aussi dans stack
	MutantStack<T, Container>& operator=(const MutantStack<T, Container> &source)
	{
		std::stack<T, Container>::operator=(source);
		return *this;
	};

	typedef typename Container::iterator iterator;

	// on a pas besoin de redéfinir les méthodes de stack, on a juste besoin de redéfinir les méthodes de container
	// le c est un attribut de stack qui est le container, vu que c'est un attribut protected, on peut y accéder (heritage de stack)
	iterator begin() { return this->c.begin(); };
	iterator end() { return this->c.end(); };

private:


};

#endif