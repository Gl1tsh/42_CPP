# Exercise 00: Start with a few functions

## Summary
Implement the following function templates:
- **swap**: Swaps the values of two arguments. Returns nothing.
- **min**: Compares two arguments and returns the smallest. If they are equal, returns the second argument.
- **max**: Compares two arguments and returns the largest. If they are equal, returns the second argument.

### Requirements
- The templates must be able to handle any type of argument.
- Both arguments must be of the same type and support comparison operators.
- Define templates in header files.

### Example Code
```cpp
int main(void) {
    int a = 2;
    int b = 3;

    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

    std::string c = "string1";
    std::string d = "string2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

    return 0;
}
```

### Expected Output
```bash
a = 3, b = 2
min(a, b) = 2
max(a, b) = 3
c = string2, d = string1
min(c, d) = string1
max(c, d) = string2
```

## Files to Submit
- `Makefile`, `main.cpp`, `whatever.{h, hpp}`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./functionsTest
```
