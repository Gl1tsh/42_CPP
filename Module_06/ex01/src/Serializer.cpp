#include "Serializer.hpp"

/*
En C++, un cast est un moyen de convertir un type de données en un autre.
Il existe plusieurs types de casts, chacun ayant une utilité différente :

    static_cast :		Utilisé pour des conversions sûres et prévisibles (comme de int à float ou inversement).
    dynamic_cast :		Utilisé principalement pour les conversions entre types de pointeurs dans une hiérarchie
						de classes (avec du polymorphisme).
    const_cast :		Utilisé pour ajouter ou retirer le qualificatif const d'une variable.
    reinterpret_cast :	Utilisé pour effectuer des conversions entre types complètement différents.
						C'est le cast le plus "brutal", car il force une conversion entre des types sans vérifier la compatibilité.

*/

uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t ptr)
{
	return reinterpret_cast<Data*>(ptr);
}
