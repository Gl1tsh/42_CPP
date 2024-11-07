# Exercice 04 : Sed is for losers

## Résumé
Cet exercice consiste à créer un programme qui prend trois paramètres : un nom de fichier, une chaîne `s1` et une chaîne `s2`. Le programme doit copier le contenu du fichier dans un nouveau fichier nommé `<filename>.replace`, en remplaçant chaque occurrence de `s1` par `s2`. L'utilisation des fonctions de manipulation de fichiers en C est interdite, ainsi que `std::string::replace`.

## Fichiers à rendre
- `Makefile`
- `main.cpp`
- `*.cpp`
- `*.[h, hpp]`

## Compilation et exécution

### Compilation
```bash
make
```

### Exécution
```bash
./sedForLosers <filename> <s1> <s2>
```

### Sortie (exemple)
```bash
Contenu original du fichier :
Hello, world!

Contenu du fichier <filename>.replace après exécution :
Hello, universe!
```
