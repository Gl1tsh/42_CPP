#include "PmergeMe.hpp"
#include <iostream>
#include <cstdlib> // pour std::atoi

int main(int argc, char* argv[]) {
    // Vérifier si des arguments sont fournis
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <number1> <number2> ... <numberN>" << std::endl;
        return 1;
    }

    // Initialiser la liste des nombres
    std::list<int> numbers;
    for (int i = 1; i < argc; ++i) {
        numbers.push_back(std::atoi(argv[i])); // Conversion de chaque argument en entier
    }

    // Créer un objet PmergeMe et y insérer les nombres
    PmergeMe sorter;
    sorter.setNumbers(numbers); // On utilise une méthode setNumbers pour initialiser `numbers` dans l'objet

    // Affichage avant le tri
    std::cout << "Before: ";
    sorter.printArray();

    // Appeler les méthodes de tri
    sorter.splitArray();  // Divise en paires
    sorter.sortArray();   // Trie chaque paire et la liste globalement
    sorter.mergeArray();  // Fusionne les paires triées

    // Affichage après le tri
    std::cout << "After: ";
    sorter.printArray();

    return 0;
}
