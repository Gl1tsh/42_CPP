# Exercise 00: BraiiiiiiinnnzzzZ

## Summary
This exercise involves implementing a `Zombie` class with a private `name` attribute of type `string`. The class must have a member function `void announce(void)` that prints a formatted message:
```bash
<name>: BraiiiiiiinnnzzzZ...
```
You also need to implement the following functions:
- `Zombie* newZombie(std::string name);` creates a zombie on the heap and returns it.
- `void randomChump(std::string name);` creates a zombie on the stack and makes it announce itself.

The goal is to understand when to allocate zombies on the stack or heap. Ensure that zombies are destroyed when no longer needed, and implement a destructor that prints a debug message.

## Files to Submit
- `Makefile`
- `main.cpp`
- `Zombie.{h, hpp}`
- `Zombie.cpp`
- `newZombie.cpp`
- `randomChump.cpp`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./braiiiiiiinnnzzzZ
```

### Sample Output
```bash
Foo: BraiiiiiiinnnzzzZ...
Destructor called for Foo
```
