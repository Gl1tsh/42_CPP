# Exercise 02: Abstract Class

## Summary
Make `Animal` an abstract class by modifying it so that it cannot be instantiated directly.

### Steps
- Add a pure virtual function `virtual void makeSound() const = 0;` to `Animal`.
- Ensure the code behaves as before, but now `Animal` cannot be instantiated.

## Files to Submit
- Files from previous exercises

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
```
