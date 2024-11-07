# Exercise 01: My Awesome PhoneBook

## Summary
Create a program that behaves like a basic phone book from the 80s. Implement two classes:

### Classes to Implement
- `PhoneBook`:
  - Represents the phone book.
  - Contains an array of contacts.
  - Can hold up to 8 contacts; if a 9th contact is added, replace the oldest one.
  - Dynamic memory allocation is forbidden.

- `Contact`:
  - Represents an individual contact in the phone book.

The phone book object should be an instance of the `PhoneBook` class, and contacts should be instances of the `Contact` class. Ensure frequently used elements are private and publicly accessible when needed.

### Program Behavior
- **ADD**: Prompts the user to fill in contact details one field at a time. The fields include first name, last name, nickname, phone number, and darkest secret. Fields cannot be left empty.
- **SEARCH**: Displays the list of contacts in a table with columns for index, first name, last name, and nickname. Each column should be 10 characters wide and right-aligned. Truncate text that exceeds the width and replace the last character with a period ('.'). Prompts the user for an index to display contact details. Handle invalid input gracefully.
- **EXIT**: Quits the program, and all contacts are lost.
- Ignore any other input.

## Files to Submit
- `Makefile`
- `*.cpp`
- `*.[h, hpp]`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./phonebook
```

### Sample Output
```bash
|     Index|First Name| Last Name|  Nickname|
|         1|     John |      Doe |   Johnny |
Enter index to view details: 1
First name: John
Last name: Doe
Nickname: Johnny
Phone number: 123456789
Darkest secret: Afraid of heights
```
