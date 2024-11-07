# Exercise 02: Array

## Summary
Create a class template `Array` that can hold elements of type `T` with the following functionality:
- **Constructors**:
  - No-parameter constructor: Creates an empty array.
  - Constructor with `unsigned int n`: Creates an array of `n` default-initialized elements.
  - Copy constructor and assignment operator: Ensure modifying one does not affect the other.
- **Member Functions**:
  - `size()`: Returns the number of elements.
- **Operators**:
  - Subscript operator (`[]`): Accesses array elements and throws an exception if the index is out of bounds.

### Requirements
- Use `new[]` for memory allocation.
- Prevent access to non-allocated memory.

### Example Code
```cpp
int main(void) {
    Array<int> numbers(5);
    for (unsigned int i = 0; i < numbers.size(); i++) {
        numbers[i] = i * 2;
        std::cout << numbers[i] << std::endl;
    }
    try {
        std::cout << numbers[10] << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
```

### Expected Output
```bash
0
2
4
6
8
std::exception: Index out of bounds
```

## Files to Submit
- `Makefile`, `main.cpp`, `Array.{h, hpp}`, `Array.tpp` (optional)

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./arrayTest
```
