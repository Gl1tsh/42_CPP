# Exercise 01: Iter

## Summary
Implement a function template `iter` that takes three parameters and returns nothing.
- **Parameters**:
  - Address of an array.
  - Length of the array.
  - A function to be applied to each element of the array.

### Requirements
- The `iter` function must work with any type of array.
- The third parameter can be an instantiated function template.

### Example Code
```cpp
void printInt(int const &x) {
    std::cout << x << std::endl;
}

int main(void) {
    int arr[] = {0, 1, 2, 3, 4};
    ::iter(arr, 5, printInt);
    return 0;
}
```

### Expected Output
```bash
0
1
2
3
4
```

## Files to Submit
- `Makefile`, `main.cpp`, `iter.{h, hpp}`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./iterTest
```
