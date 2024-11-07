# Exercice 01 : Premiers pas vers une classe utile

## Résumé
Ajoutez des constructeurs supplémentaires et des fonctions à votre classe Fixed pour permettre la conversion entre entiers, flottants et valeurs en virgule fixe. Vous devez implémenter :

### Membres publics supplémentaires
- Constructeur prenant un entier constant.
- Constructeur prenant un flottant constant.
- `float toFloat(void) const` : convertit la valeur en flottant.
- `int toInt(void) const` : convertit la valeur en entier.
- Surcharge de l'opérateur `<<` pour afficher la valeur en flottant.

## Fichiers à rendre
- `Makefile`
- `main.cpp`
- `Fixed.{h, hpp}`
- `Fixed.cpp`

## Compilation et exécution

### Compilation
```bash
make
```

### Exécution
```bash
./classeUtile
```

### Sortie (exemple)
```bash
Default constructor called
Int constructor called
Float constructor called
Copy constructor called
Copy assignment operator called
Float constructor called
Copy assignment operator called
a is 1234.43
b is 10
c is 42.4219
d is 10
a is 1234 as integer
b is 10 as integer
c is 42 as integer
d is 10 as integer
Destructor called
Destructor called
Destructor called
Destructor called
```
