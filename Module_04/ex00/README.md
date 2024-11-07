# Exercise 00: Polymorphism

## Summary
Implement a base class `Animal` with the following protected attribute:
- `std::string type`

Create derived classes `Dog` and `Cat` that inherit from `Animal`. Each derived class should initialize its `type` attribute to its name (e.g., "Dog" or "Cat"). The base `Animal` class can have an empty or default-initialized `type`.

### Public Member Function
- `void makeSound() const`: Prints an appropriate sound (dogs do not meow, cats do not bark).

Ensure constructors and destructors display unique messages.

### Example Code
```cpp
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound();
j->makeSound();
meta->makeSound();

delete j;
delete i;
delete meta;
```

## Files to Submit
- `Makefile`
- `main.cpp`
- `*.cpp`, `*.[h, hpp]`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./animalTest
```

### Sample Output
```bash
Dog barks!
Cat meows!
Animal makes a generic sound!
```
