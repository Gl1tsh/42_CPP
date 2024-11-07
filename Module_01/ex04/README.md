# Exercise 04: Sed is for Losers

## Summary
Create a program that takes three parameters: a filename, a string `s1`, and a string `s2`. The program should copy the content of the file into a new file `<filename>.replace`, replacing all occurrences of `s1` with `s2`. Using C file manipulation functions is forbidden, as well as `std::string::replace`.

## Files to Submit
- `Makefile`
- `main.cpp`
- `*.cpp`
- `*.[h, hpp]`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./sedForLosers <filename> <s1> <s2>
```

### Sample Output
```bash
Original file content:
Hello, world!

Content of <filename>.replace after execution:
Hello, universe!
```
