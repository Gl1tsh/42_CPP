# Exercise 01: Form up, maggots!

## Summary
Create a `Form` class with the following attributes:
- **Attributes**:
  - A constant `name`.
  - A `bool` indicating if it is signed (default: false).
  - Constant grades required for signing and executing the form.
- **Exceptions**:
  - `Form::GradeTooHighException` and `Form::GradeTooLowException` for out-of-bounds grades.
- **Member Functions**:
  - `getName()`, `isSigned()`, `getSignGrade()`, and `getExecuteGrade()`.
  - `void beSigned(const Bureaucrat& b)`: Marks the form as signed if the bureaucrat’s grade is high enough; otherwise, throws an exception.

### Bureaucrat Enhancements
- Add `signForm()` to `Bureaucrat`, which attempts to sign a form and prints success or failure messages.

## Files to Submit
- Files from Exercise 00 + `Form.{h, hpp}`, `Form.cpp`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./formTest
```

### Sample Output
```bash
Alice signed TaxForm.
Bob couldn’t sign TaxForm because Grade too low.
```
