# Exercise 01: Serialization

## Summary
Implement a `Serializer` class with the following static methods:
- **Methods**:
  - `static uintptr_t serialize(Data* ptr)`: Converts a `Data*` pointer to an unsigned integer type (`uintptr_t`).
  - `static Data* deserialize(uintptr_t raw)`: Converts a `uintptr_t` back to a `Data*` pointer.

### Requirements
- Ensure `Serializer` cannot be instantiated.
- Create a `Data` structure with at least one member variable.
- Test the serialization and deserialization to confirm that the original and returned pointers are equal.

### Example Code
```cpp
Data myData;
uintptr_t raw = Serializer::serialize(&myData);
Data* ptr = Serializer::deserialize(raw);
assert(ptr == &myData); // Should pass
```

## Files to Submit
- `Makefile`, `Serializer.{h, hpp}`, `Serializer.cpp`, `Data.{h, hpp}`, `main.cpp`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./serializerTest
```
