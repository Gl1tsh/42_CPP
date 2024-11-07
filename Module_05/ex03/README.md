# Exercise 03: At least this beats coffee-making

## Summary
Create an `Intern` class with a single function:
- **Member Function**:
  - `Form* makeForm(const std::string& formName, const std::string& target)`: Returns a pointer to a new form of the specified type or prints an error if the form name is unknown.

### Example Code
```cpp
Intern intern;
Form* form;

form = intern.makeForm("robotomy request", "Bender");
```

### Sample Output
```bash
Intern creates RobotomyRequestForm.
Error: Unknown form type.
```

## Files to Submit
- Files from Exercise 02 + `Intern.{h, hpp}`, `Intern.cpp`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./internTest
```

### Sample Output
```bash
Intern creates RobotomyRequestForm.
```
