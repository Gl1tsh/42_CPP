# Exercise 02: PmergeMe

## Summary
Create a program named `PmergeMe` that sorts a sequence of positive integers using the "merge-insert" sorting algorithm (Ford-Johnson).

### Requirements
- The program should accept a sequence of positive integers as an argument.
- Use at least two containers to validate the exercise.
- Display:
  - The original sequence.
  - The sorted sequence.
  - The time taken to sort using each container.
- Handle errors with appropriate messages.
- The program must handle at least 3000 integers.

### Example Code
```bash
$> ./PmergeMe 3 5 9 7 4
Before: 3 5 9 7 4
After: 3 4 5 7 9
Time to process a range of 5 elements with std::[...] : 0.00031 us
Time to process a range of 5 elements with std::[...] : 0.00014 us
$> ./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
Before: 141 79 526 321 [...]
After: 79 141 321 526 [...]
Time to process a range of 3000 elements with std::[...] : 62.14389 us
Time to process a range of 3000 elements with std::[...] : 69.27212 us
$> ./PmergeMe "-1" "2"
Error
```

## Files to Submit
- `Makefile`, `main.cpp`, `PmergeMe.{cpp, hpp}`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./PmergeMe <sequence>
```
