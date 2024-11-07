# Exercise 00: My First Canonical Class

## Summary
In this exercise, you need to create a canonical class to represent a fixed-point number. The class should include an integer to store the value and a static constant integer for the fractional bits initialized to 8.

### Public Members to Implement
- Default constructor initializing the value to 0.
- Copy constructor.
- Assignment operator overload.
- Destructor.
- `int getRawBits(void) const`: returns the raw value.
- `void setRawBits(int const raw)`: sets the value with the given parameter.

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
./myFirstCanonical
```

### Sample Output
```bash
Default constructor called
Copy constructor called
Copy assignment operator called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called
```
