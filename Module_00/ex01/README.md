# Exercice 01 : My Awesome PhoneBook

## Résumé
Cet exercice consiste à créer un programme qui simule un répertoire téléphonique limité à 8 contacts. Le programme doit inclure les commandes `ADD`, `SEARCH`, et `EXIT`.

- **`ADD`** : Permet à l'utilisateur d'ajouter un contact avec des champs tels que le prénom, le nom de famille, le surnom, le numéro de téléphone et le secret le plus sombre.
- **`SEARCH`** : Affiche les contacts sous forme de tableau et permet de rechercher un contact par index.
- **`EXIT`** : Quitte le programme et efface les contacts en mémoire.

## Fichiers à rendre
- `Makefile`
- `*.cpp`
- `*.h` ou `*.hpp`

## Compilation et exécution

### Compilation
Pour compiler le programme, exécutez la commande suivante :
```bash
make
```

---
### Execution
```bash
./phonebook
```

---
### Exemples d'utilisation
Exemple 1 : Ajouter un contact
Lancez le programme et entrez la commande ADD :
```bash
./phonebook
```

Entrée utilisateur :
```bash
ADD
First name: John
Last name: Doe
Nickname: Johnny
Phone number: 123456789
Darkest secret: Afraid of heights
```

---
Exemple 2 : Rechercher un contact
Après avoir ajouté des contacts, entrez la commande SEARCH :
```bash
./phonebook
```

Entrée utilisateur :
```bash
SEARCH
```

Sortie (exemple de format de tableau) :
```bash
|  Index   |First Name| Last Name| Nickname |
|     1    |     John |      Doe |   Johnny |
|     2    |    Alice |  Johnson |    Ally  |
```

---
Exemple 2 : Rechercher un contact
Pour quitter le programme, entrez la commande EXIT :
```bash
./phonebook
```

Entrée utilisateur :
```bash
EXIT
```

Sortie
```bash
Goodbye!
```
