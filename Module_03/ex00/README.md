# Exercise 00: Aaaaand... OPEN!

## Summary
Implement a class named `ClapTrap` with the following private attributes initialized to the specified values:
- `Name`, passed as a parameter to the constructor
- `Hit points` (10), representing the health of the ClapTrap
- `Energy points` (10)
- `Attack damage` (0)

### Public Member Functions
- `void attack(const std::string& target)`: Causes the target to lose `<attack damage>` hit points and prints a message.
- `void takeDamage(unsigned int amount)`: Reduces hit points by the specified amount.
- `void beRepaired(unsigned int amount)`: Increases hit points by the specified amount and prints a message.

The constructors and destructor should print messages for easy verification.

## Files to Submit
- `Makefile`
- `main.cpp`
- `ClapTrap.{h, hpp}`
- `ClapTrap.cpp`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./clapTrapTest
```

### Sample Output
```bash
ClapTrap John attacks target, causing 5 points of damage!
ClapTrap John takes 3 points of damage!
ClapTrap John repairs itself for 4 points!
```
