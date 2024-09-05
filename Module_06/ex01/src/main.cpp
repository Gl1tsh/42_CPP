#include "Serializer.hpp"
#include <iostream>

int main()
{

//	Sérialisation :		tu prends un pointeur et tu le convertis en entier.
//	Désérialisation :	tu reprends cet entier et tu le reconvertis en pointeur.
//	But :				Vérifier que ton système peut transformer un pointeur en entier,
//						puis récupérer le même pointeur à partir de cet entier.

	Data myData = {10, "C'est la merde"};
	std::cout << "Number: = " << myData.number << std::endl;
	std::cout << "Text: = " << myData.text << std::endl;

	// On sérialise le pointeur vers cet objet
	uintptr_t valeur_brut = Serializer::serialize(&myData);
	std::cout << "valeur_brut = " << valeur_brut << std::endl;
	std::cout << std::endl;

	// On désérialise ensuite ce nombre en pointeur
	Data* deserializedData = Serializer::deserialize(valeur_brut);
	std::cout << "deserializedData->number = " << deserializedData->number << std::endl;
	std::cout << "deserializedData->text = " << deserializedData->text << std::endl;

	// On vérifie si le pointeur désérialisé est le même que le pointeur original
	if (deserializedData == &myData)
	{
		std::cout << "Sérialisation et désérialisation réussies !" << std::endl;
	}
	else
		std::cout << "Échec de la désérialisation." << std::endl;

	return 0;
}