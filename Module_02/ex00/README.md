# Exercice 00 : Mon premier canon

## Résumé
Dans cet exercice, vous devez créer une classe sous forme canonique pour représenter un nombre en virgule fixe. La classe doit inclure un entier pour stocker la valeur et un entier constant statique pour la partie fractionnaire initialisée à 8 bits. 

### Membres publics à implémenter
- Constructeur par défaut initialisant la valeur à 0.
- Constructeur de recopie.
- Surcharge de l'opérateur d'affectation.
- Destructeur.
- `int getRawBits(void) const` : retourne la valeur brute.
- `void setRawBits(int const raw)` : initialise la valeur avec celle passée en paramètre.

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
./monPremierCanon
```

### Sortie (exemple)
```bash
Default constructor called
Copy constructor called
Copy assignment operator called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called
```
