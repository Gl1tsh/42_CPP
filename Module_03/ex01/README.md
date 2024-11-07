# Exercise 01: Serena, my love!

## Summary
Create a derived class `ScavTrap` that inherits from `ClapTrap`. It should:
- Print different messages in its constructors, destructor, and `attack()` function.
- Properly show construction and destruction chaining in tests.

### Attribute Initialization
- `Name`, passed as a parameter to the constructor
- `Hit points` (100)
- `Energy points` (50)
- `Attack damage` (20)

### Special Member Function
- `void guardGate()`: Prints a message indicating that `ScavTrap` is in Gatekeeper mode.

## Files to Submit
- `Makefile`
- Files from previous exercise + `ScavTrap.{h, hpp}`
- `ScavTrap.cpp`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./scavTrapTest
```

### Sample Output
```bash
ScavTrap Serena enters Gatekeeper mode!
ScavTrap Serena attacks target, causing 20 points of damage!
```
