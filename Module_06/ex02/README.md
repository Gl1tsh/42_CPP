# Exercise 02: Identify real type

## Summary
Implement a `Base` class with a public virtual destructor and create three derived classes `A`, `B`, and `C`.

### Functions to Implement
- `Base* generate()`: Randomly creates an instance of `A`, `B`, or `C` and returns it as a `Base*`.
- `void identify(Base* p)`: Identifies the actual type of the object pointed to by `p` and prints "A", "B", or "C".
- `void identify(Base& p)`: Identifies the actual type of the object referenced by `p` and prints "A", "B", or "C". This function should not use pointers internally.

### Restrictions
- Do not use the `std::typeinfo` header.
- The classes `Base`, `A`, `B`, and `C` do not need to follow the Orthodox Canonical Form.

### Example Code
```cpp
Base* basePtr = generate();
identify(basePtr);
identify(*basePtr);
```

## Files to Submit
- `Makefile`, `Base.{h, hpp}`, `A.{h, hpp}`, `B.{h, hpp}`, `C.{h, hpp}`, `main.cpp`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./identifyTest
```

### Sample Output
```bash
Identified type: A
Identified type: C
```
