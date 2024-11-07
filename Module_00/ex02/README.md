# Exercice 02 : L'emploi de vos rêves

## Résumé
Cet exercice consiste à recréer un fichier source manquant `Account.cpp` à partir du fichier d'en-tête `Account.hpp` et d'un programme de test `tests.cpp`. L'objectif est de reconstruire la classe `Account` pour que le programme passe les tests fournis et reproduise la sortie spécifiée dans le fichier de log.

## Fichiers à rendre
- `Makefile`
- `Account.cpp`
- `Account.hpp`
- `tests.cpp`

## Compilation et exécution

### Compilation
Pour compiler le programme, exécutez la commande suivante :
```bash
make
```

---
### Exemples d'utilisation
Exemple 1 : Tester le programme
Lancez le programme ./tests pour vérifier que la sortie correspond aux attentes du fichier de log :
```bash
./tests
```

Sortie (exemple de format de sortie, sauf horodatage) :
```bash
[19920104_091532] index:0;amount:42;created
[19920104_091532] index:1;amount:54;created
[19920104_091532] index:0;amount:42;deposits:5;withdrawals:0
[19920104_091532] index:1;amount:54;deposits:0;withdrawals:0
[19920104_091532] index:0;amount:47;deposits:5;withdrawals:0
[19920104_091532] index:1;amount:47;deposits:0;withdrawals:7
[19920104_091532] index:0;amount:42;deposits:5;withdrawals:5
[19920104_091532] index:1;amount:40;deposits:0;withdrawals:7
```

---
### Vérification de la sortie
Pour vérifier que la sortie correspond à celle du fichier .log (hors horodatage), redirigez la sortie du programme vers un fichier et utilisez la commande diff :
```bash
./tests > output.log
diff output.log reference.log
```

---
### Remarques :
L'horodatage dans la sortie sera différent en raison de l'heure d'exécution actuelle.
L'ordre d'appel des destructeurs peut varier en fonction du compilateur ou du système d'exploitation, mais cela n'affectera pas la validité de l'exercice.
Assurez-vous que les variables statiques et les méthodes publiques/privées respectent les consignes du sujet.
