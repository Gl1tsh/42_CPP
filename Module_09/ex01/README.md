# Exercise 01: Reverse Polish Notation (RPN)

## Summary
Create a program that evaluates mathematical expressions in Reverse Polish Notation (RPN).

### Requirements
- The program must be named `RPN`.
- It should take a mathematical expression in RPN as an argument.
- Support the operators: `+`, `-`, `*`, `/`.
- Print the result or an error message if the input is invalid.
- Numbers should be single digits.

### Example Code
```bash
$> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
42
$> ./RPN "7 7 * 7 -"
42
$> ./RPN "1 2 * 2 / 2 * 2 4 - +"
0
$> ./RPN "(1 + 1)"
Error
```

## Files to Submit
- `Makefile`, `main.cpp`, `RPN.{cpp, hpp}`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./RPN "expression"
```
