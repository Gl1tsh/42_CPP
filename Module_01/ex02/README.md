# Exercice 02 : HI THIS IS BRAIN

## Résumé
Cet exercice consiste à créer un programme qui utilise des pointeurs et des références pour manipuler des chaînes de caractères. Vous devrez initialiser une variable `string` avec "HI THIS IS BRAIN", créer un pointeur `stringPTR` pointant vers cette variable et une référence `stringREF` la référant. L'objectif est de démontrer la manipulation et l'affichage des adresses et des valeurs pour bien comprendre la relation entre les variables, les pointeurs, et les références en C++.

## Fichiers à rendre
- `Makefile`
- `main.cpp`

## Compilation et exécution

### Compilation
Pour compiler le programme, exécutez la commande suivante :
```bash
make
```

---
### Exécution
Pour lancer le programme, utilisez la commande suivante :
```bash
./hiThisIsBrain
```

Sortie (exemple) :
```bash
Adresse de la variable string: 0x7ffee7b3c690
Adresse contenue dans stringPTR: 0x7ffee7b3c690
Adresse contenue dans stringREF: 0x7ffee7b3c690

Valeur de la variable string: HI THIS IS BRAIN
Valeur pointée par stringPTR: HI THIS IS BRAIN
Valeur référencée par stringREF: HI THIS IS BRAIN
```

---
Remarques :
Cet exercice vise à démystifier l'utilisation des références et des pointeurs en C++.
Vérifiez que les adresses affichées par string, stringPTR et stringREF sont identiques pour confirmer qu'ils pointent tous vers la même zone mémoire.
Il n'y a pas de fonctions interdites, donc vous pouvez utiliser les fonctionnalités de base de la bibliothèque standard si nécessaire.
