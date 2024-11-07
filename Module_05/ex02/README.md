# Exercise 02: No, you need form 28B, not 28C...

## Summary
Create an abstract class `AForm` as a base for concrete form types:
- **Concrete Classes**:
  - `ShrubberyCreationForm`: Creates a file with ASCII trees.
  - `RobotomyRequestForm`: Has a 50% chance to announce successful robotomy.
  - `PresidentialPardonForm`: Announces a presidential pardon.
- **Execution Requirements**:
  - Ensure forms can only be executed if signed and the executor’s grade is high enough. Throw exceptions if not.

### Bureaucrat Enhancements
- Add `executeForm(const AForm& form)` to `Bureaucrat` to attempt executing a form and print the outcome.

## Files to Submit
- Files from Exercise 01 + `AForm.{h, hpp}`, `ShrubberyCreationForm.{h, hpp}`, `RobotomyRequestForm.{h, hpp}`, `PresidentialPardonForm.{h, hpp}`
- Corresponding `.cpp` files for each.

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./formExecutionTest
```

### Sample Output
```bash
Bob executed RobotomyRequestForm.
Failed to execute: Grade too low.
```
