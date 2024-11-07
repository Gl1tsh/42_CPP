# Exercise 01: Span

## Summary
Create a `Span` class to store up to `N` integers, where `N` is passed to the constructor.

### Member Functions
- `void addNumber(int num)`: Adds a number to the span. Throws an exception if the span is full.
- `int shortestSpan()`: Returns the shortest distance between any two stored numbers. Throws an exception if less than two numbers are stored.
- `int longestSpan()`: Returns the longest distance between any two stored numbers. Throws an exception if less than two numbers are stored.
- A function to add a range of numbers using iterators.

### Example Code
```cpp
#include "Span.hpp"
#include <iostream>

int main() {
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    return 0;
}
```

### Expected Output
```bash
2
14
```

## Files to Submit
- `Makefile`, `main.cpp`, `Span.{h, hpp}`, `Span.cpp`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./spanTest
```
