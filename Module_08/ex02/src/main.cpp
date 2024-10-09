#include "MutantStack.tpp"
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
	mstack.pop();
	std::cout << "the top element was popped " << std::endl;
	std::cout << "the top element is " << mstack.top() << std::endl;
	std::cout << "the size of the stack is " << mstack.size() << std::endl;
	mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);

	return 0;
}
