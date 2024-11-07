# Exercise 01: Moar Brainz!

## Summary
Create a function `Zombie* zombieHorde(int N, std::string name);` that allocates `N` `Zombie` objects in a single allocation and initializes them with the given name. The function should return a pointer to the first zombie in the horde. Test the `zombieHorde()` function to ensure each zombie calls `announce()`.

Make sure to delete the zombies after use and check for memory leaks.

## Files to Submit
- `Makefile`
- `main.cpp`
- `Zombie.{h, hpp}`
- `Zombie.cpp`
- `zombieHorde.cpp`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./moarBrainz
```

### Sample Output
```bash
Zombie 0: BraiiiiiiinnnzzzZ...
Zombie 1: BraiiiiiiinnnzzzZ...
Zombie 2: BraiiiiiiinnnzzzZ...
...
```
