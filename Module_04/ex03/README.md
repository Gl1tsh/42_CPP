# Exercise 03: Interface & Recap

## Summary
Implement interfaces through abstract classes. Complete the provided class `AMateria` and create concrete classes `Ice` and `Cure`.

### `AMateria` Class
- Constructor: `AMateria(std::string const & type)`
- `std::string const & getType() const`: Returns the type.
- `virtual AMateria* clone() const = 0;`
- `virtual void use(ICharacter& target)`

### Derived Classes
- `Ice` type: "ice"
- `Cure` type: "cure"
- Implement `clone()` to return a new instance of the same type.
- Implement `use()` to display:
  - Ice: `* shoots an ice bolt at <name> *`
  - Cure: `* heals <name>'s wounds *`

### `Character` Class
- Implements `ICharacter` interface.
- Inventory of up to 4 `AMateria` items.
- `equip()`, `unequip()`, and `use()` functions.
- Copy constructor and deep copy behavior.

### `MateriaSource` Class
- Implements `IMateriaSource` interface.
- `void learnMateria(AMateria*)`
- `AMateria* createMateria(std::string const & type)`

## Example Code
```cpp
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());

ICharacter* me = new Character("me");

AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);

ICharacter* bob = new Character("bob");

me->use(0, *bob);
me->use(1, *bob);

delete bob;
delete me;
delete src;
```

### Expected Output
```bash
* shoots an ice bolt at bob *
* heals bob's wounds *
```

## Files to Submit
- `Makefile`, `main.cpp`
- `AMateria.{h, hpp}`, `Ice.cpp`, `Cure.cpp`
- `Character.{h, hpp}`, `Character.cpp`
- `MateriaSource.{h, hpp}`, `MateriaSource.cpp`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./materiaTest
```

### Sample Output
```bash
* shoots an ice bolt at bob *
* heals bob's wounds *
```
