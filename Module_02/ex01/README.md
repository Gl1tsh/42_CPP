# Exercise 01: First Steps Towards a Useful Class

## Summary
Add additional constructors and functions to your `Fixed` class to enable conversions between integers, floats, and fixed-point values. You need to implement:

### Additional Public Members
- Constructor taking a constant integer.
- Constructor taking a constant float.
- `float toFloat(void) const`: converts the value to a float.
- `int toInt(void) const`: converts the value to an integer.
- Overload of the `<<` operator to output the value as a float.

## Files to Submit
- `Makefile`
- `main.cpp`
- `Fixed.{h, hpp}`
- `Fixed.cpp`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./usefulClass
```

### Sample Output
```bash
Default constructor called
Int constructor called
Float constructor called
Copy constructor called
Copy assignment operator called
Float constructor called
Copy assignment operator called
a is 1234.43
b is 10
c is 42.4219
d is 10
a is 1234 as integer
b is 10 as integer
c is 42 as integer
d is 10 as integer
Destructor called
Destructor called
Destructor called
Destructor called
```
