# Exercise 00: Mommy, when I grow up, I want to be a bureaucrat!

## Summary
Create a `Bureaucrat` class with the following characteristics:
- **Attributes**:
  - A constant `name`.
  - A `grade` that ranges from 1 (highest) to 150 (lowest).
- **Exceptions**:
  - `Bureaucrat::GradeTooHighException` for grades higher than 1.
  - `Bureaucrat::GradeTooLowException` for grades lower than 150.
- **Member Functions**:
  - `getName()`: Returns the bureaucrat’s name.
  - `getGrade()`: Returns the bureaucrat’s grade.
  - Functions to increment and decrement the grade, which throw exceptions if the grade goes out of range.

### Overloads
- Overload the insertion (`<<`) operator to print:
  ```
  <name>, bureaucrat grade <grade>.
  ```

## Files to Submit
- `Makefile`, `main.cpp`, `Bureaucrat.{h, hpp}`, `Bureaucrat.cpp`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./bureaucratTest
```

### Sample Output
```bash
John, bureaucrat grade 42.
John couldn’t be created: Grade too low.
```
