# Exercise 03: Unnecessary Violence

## Summary
Implement a `Weapon` class with a private `type` attribute and member functions to get and set the type. Create `HumanA` and `HumanB` classes, both having a `Weapon` and a `name`. Both should have a member function `attack()` that displays:
```bash
<name> attacks with their <weapon type>
```
`HumanA` should receive the `Weapon` in its constructor, while `HumanB` should be able to receive a `Weapon` after instantiation.

## Files to Submit
- `Makefile`
- `main.cpp`
- `Weapon.{h, hpp}`
- `Weapon.cpp`
- `HumanA.{h, hpp}`
- `HumanA.cpp`
- `HumanB.{h, hpp}`
- `HumanB.cpp`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./unnecessaryViolence
```

### Sample Output
```bash
Bob attacks with their crude spiked club
Bob attacks with their some other type of club
Jim attacks with their crude spiked club
Jim attacks with their some other type of club
```
