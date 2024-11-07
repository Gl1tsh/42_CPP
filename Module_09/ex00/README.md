# Exercise 00: Bitcoin Exchange

## Summary
Create a program that displays the value of a specified amount of Bitcoin at a certain date.

### Requirements
- The program must be named `btc`.
- It should take a CSV file as an argument, which represents Bitcoin prices over time.
- Each line in the input file should follow the format:
  ```
  date | value
  ```
  - The date must be in `YYYY-MM-DD` format.
  - The value must be a positive integer or float between 0 and 1000.
- If the input date does not exist in the database, use the nearest earlier date.
- Handle errors with appropriate messages (e.g., invalid dates or values).

### Example Code
```bash
$> ./btc input.txt
2011-01-03 => 3 = 0.9
2011-01-03 => 2 = 0.6
2011-01-03 => 1 = 0.3
2011-01-03 => 1.2 = 0.36
2011-01-09 => 1 = 0.32
Error: not a positive number.
Error: bad input => 2001-42-42
2012-01-11 => 1 = 7.1
Error: too large a number.
```

## Files to Submit
- `Makefile`, `main.cpp`, `BitcoinExchange.{cpp, hpp}`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./btc input.txt
```
