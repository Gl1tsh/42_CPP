# Exercise 03: Now it’s weird!

## Summary
Create a `DiamondTrap` class that inherits from both `FragTrap` and `ScavTrap`. It should:
- Have a private `name` attribute with the same name as `ClapTrap`'s `name` attribute.
- Use attributes from its parent classes:
  - `Name`, passed as a parameter to the constructor
  - `ClapTrap::name` (constructor parameter + "_clap_name" suffix)
  - `Hit points` (from `FragTrap`)
  - `Energy points` (from `ScavTrap`)
  - `Attack damage` (from `FragTrap`)
  - `attack()` (from `ScavTrap`)

### Special Member Function
- `void whoAmI()`: Prints both `DiamondTrap`'s name and its `ClapTrap` name.

Ensure that the `ClapTrap` subobject is created only once.

## Files to Submit
- `Makefile`
- Files from previous exercises + `DiamondTrap.{h, hpp}`
- `DiamondTrap.cpp`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./diamondTrapTest
```

### Sample Output
```bash
DiamondTrap Max identifies as Max and Max_clap_name.
DiamondTrap Max attacks target, causing 30 points of damage!
```
