#include "MutantStack.hpp"
#include <iostream>

/*
std::stack est une structure de données contenue dans la bibliothèque standard C++ qui représente une pile 
(ou "stack" en anglais). Une pile fonctionne selon le principe LIFO (Last In, First Out),
ce qui signifie que le dernier élément ajouté est le premier à être retiré

Voici les principales opérations que vous pouvez effectuer avec std::stack :

	push() : Ajouter un élément au sommet de la pile.
	pop() : Retirer l'élément au sommet de la pile.
	top() : Accéder à l'élément au sommet sans le retirer.
	empty() : Vérifier si la pile est vide.
	size() : Obtenir le nombre d'éléments dans la pile.

*/

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << "the size of the stack is " << mstack.size() << std::endl;
	std::cout << "the top element is " << mstack.top() << std::endl;

	std::cout << std::endl;

	mstack.pop();
	std::cout << "the top element (17) was popped " << std::endl;
	std::cout << "the top element is now " << mstack.top() << std::endl;
	std::cout << "the size of the stack is " << mstack.size() << std::endl;

	std::cout << std::endl;

	mstack.push(3);
	std::cout << "push 3, the top of the stack is now : " << mstack.top() << std::endl;

	mstack.push(5);
	std::cout << "push 5, the top of the stack is now : " << mstack.top() << std::endl;

	mstack.push(737); //[...] mstack.push(0);
	std::cout << "push 737, the top of the stack is now : " << mstack.top() << std::endl;

	std::cout << std::endl;

	// on peut utiliser les itérateurs de la deque
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
	++it; }
	std::stack<int> s(mstack); return 0;
}
