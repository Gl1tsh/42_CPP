# Exercise 00: Megaphone

## Summary
Write a program that behaves as follows to ensure everyone is awake:
```bash
$> ./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$> ./megaphone Damnit "!" "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$> ./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$>
```
Implement this exercise in a C++ way.

## Files to Submit
- `Makefile`
- `megaphone.cpp`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./megaphone <arguments>
```

### Sample Output
```bash
Input: ./megaphone "hello world"
Output: HELLO WORLD
```
