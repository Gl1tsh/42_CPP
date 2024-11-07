# Exercise 02: Mutant Abomination

## Summary
Create a `MutantStack` class that inherits from `std::stack` and makes it iterable.

### Requirements
- The class should include all member functions of `std::stack`.
- Add iterator functionality to allow iteration over the stack’s elements.

### Example Code
```cpp
#include "MutantStack.hpp"
#include <iostream>

int main() {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();
    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    return 0;
}
```

### Expected Output
```bash
17
1
5
3
5
737
0
```

## Files to Submit
- `Makefile`, `main.cpp`, `MutantStack.{h, hpp}`, `MutantStack.tpp` (optional)

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./mutantStackTest
```
