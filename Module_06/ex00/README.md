# Exercise 00: Conversion of scalar types

## Summary
Create a `ScalarConverter` class with a single static method:
- **Static Method**:
  - `static void convert(const std::string& literal)`: Takes a string representing a C++ literal and outputs its value in the following scalar types:
    - `char`
    - `int`
    - `float`
    - `double`

### Requirements
- The class should not be instantiable.
- Handle special cases for floats and doubles such as `-inff`, `+inff`, `nanf`, `-inf`, `+inf`, and `nan`.
- If the conversion to `char` is not displayable, print a relevant message.
- Display conversion errors or overflows appropriately.

### Example Output
```bash
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0

./convert nan
char: impossible
int: impossible
float: nanf
double: nan

./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
```

## Files to Submit
- `Makefile`, `ScalarConverter.{h, hpp}`, `ScalarConverter.cpp`, `main.cpp`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./convertTest
```
