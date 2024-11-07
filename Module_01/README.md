# C++ Module 01 - Résumé des exercices

## Exercice 00 : BraiiiiiiinnnzzzZ
**Résumé** : Implémentez une classe `Zombie` qui a un attribut privé `name` et une fonction membre `announce()` pour que le zombie annonce son nom. Vous devez également créer deux fonctions supplémentaires : `newZombie()` qui alloue dynamiquement un zombie sur le tas et `randomChump()` qui crée un zombie sur la pile et le fait annoncer son nom.

**Points clés** :
- Différences entre allocation sur la pile et le tas.
- Gestion de la mémoire et destruction des objets.

**Fichiers à rendre** :
- `Makefile`
- `main.cpp`
- `Zombie.{h, hpp}`
- `Zombie.cpp`
- `newZombie.cpp`
- `randomChump.cpp`

---

## Exercice 01 : Moar brainz!
**Résumé** : Créez une fonction `zombieHorde()` qui alloue dynamiquement un tableau de `N` zombies, initialisés avec le même nom, et retourne un pointeur vers le premier zombie. Assurez-vous de tester et de libérer correctement la mémoire.

**Points clés** :
- Allocation dynamique d'un tableau d'objets.
- Boucles pour initialiser et parcourir les zombies.

**Fichiers à rendre** :
- `Makefile`
- `main.cpp`
- `Zombie.{h, hpp}`
- `Zombie.cpp`
- `zombieHorde.cpp`

---

## Exercice 02 : HI THIS IS BRAIN
**Résumé** : Écrivez un programme contenant une variable `string` initialisée à "HI THIS IS BRAIN", un pointeur `stringPTR` et une référence `stringREF` pointant vers cette variable. Affichez les adresses et les valeurs de la variable, du pointeur et de la référence.

**Points clés** :
- Différences entre pointeurs et références.
- Manipulation des adresses en C++.

**Fichiers à rendre** :
- `Makefile`
- `main.cpp`

---

## Exercice 03 : Unnecessary violence
**Résumé** : Implémentez une classe `Weapon` avec un attribut `type` et les fonctions `getType()` et `setType()`. Créez deux classes `HumanA` et `HumanB` qui ont un `
