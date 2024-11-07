# Exercise 01: I Don’t Want to Set the World on Fire

## Summary
Implement a `Brain` class containing an array of 100 `std::string` called `ideas`. Both `Dog` and `Cat` should have a `Brain*` as a private attribute.

### Key Points
- `Dog` and `Cat` must create their `Brain` with `new Brain()` during construction.
- Properly `delete` the `Brain` during destruction.
- Ensure deep copies for `Dog` and `Cat` to avoid shallow copy issues.

### Example Code
```cpp
const Animal* j = new Dog();
const Animal* i = new Cat();

delete j; // should not create a memory leak
delete i;
```

## Files to Submit
- Files from previous exercise + `Brain.{h, hpp}`
- `Brain.cpp`, `Dog.cpp`, `Cat.cpp`

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
Dog's constructor called
Brain's constructor called
Cat's constructor called
Brain's constructor called
Dog's destructor called
Brain's destructor called
Cat's destructor called
Brain's destructor called
```
