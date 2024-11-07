# Exercice 05 : Harl 2.0

## Résumé
Créez une classe `Harl` avec quatre fonctions privées : `debug`, `info`, `warning`, `error`, et une fonction publique `void complain(std::string level)`. La fonction publique appelle l'une des fonctions privées selon le niveau passé en paramètre. Utilisez des pointeurs sur fonctions membres pour éviter les structures `if/else`.

## Fichiers à rendre
- `Makefile`
- `main.cpp`
- `Harl.{h, hpp}`
- `Harl.cpp`

## Compilation et exécution

### Compilation
```bash
make
```

### Exécution
```bash
./harl2.0
```

### Sortie (exemple)
```bash
[ DEBUG ]
I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!
[ INFO ]
I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!
[ WARNING ]
I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.
[ ERROR ]
This is unacceptable! I want to speak to the manager now.
```
