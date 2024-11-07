# Exercice 00 : Mégaphone

## Résumé
Cet exercice consiste à créer un programme nommé `megaphone` qui prend des arguments passés en ligne de commande et les affiche en majuscules. Si aucun argument n'est fourni, le programme affiche un message spécifique pour simuler un bruit fort et insupportable.

## Fichiers à rendre
- `Makefile`
- `megaphone.cpp`

## Compilation et exécution

### Compilation
Pour compiler le programme, exécutez la commande suivante :
```bash
make
```
---
### Execution
```bash
./megaphone "votre texte ici"
```

### Exemple 1 :
Avec un argument
```bash
./megaphone "Hello World!"
```

Sortie
```bash
HELLO WORLD!
```
---
### Exemple 2 :
Avec plusieurs arguments
```bash
./megaphone "42 is the answer" "to life"
```

Sortie
```bash
42 IS THE ANSWER TO LIFE
```
---
### Exemple 3 :
Sans arguments
```bash
./megaphone
```

Sortie
```bash
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```


