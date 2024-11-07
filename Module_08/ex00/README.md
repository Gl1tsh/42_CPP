# Exercise 00: Easy find

## Summary
Create a template function `easyfind` that takes a type `T` and two parameters:
- The first parameter is of type `T` (assumed to be a container of integers).
- The second parameter is an integer.

The function should find the first occurrence of the integer in the container.
- If found, return the iterator pointing to the occurrence.
- If not found, throw an exception or return an error value of your choice.

### Requirements
- Implement your own tests to ensure the function works as expected.
- You do not need to handle associative containers.

### Example Code
```cpp
#include <vector>
#include <iostream>
#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    for (int i = 0; i < 10; i++) vec.push_back(i);

    try {
        auto it = easyfind(vec, 5);
        std::cout << "Found: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
```

### Expected Output
```bash
Found: 5
```

## Files to Submit
- `Makefile`, `main.cpp`, `easyfind.{h, hpp}`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./easyFindTest
```
