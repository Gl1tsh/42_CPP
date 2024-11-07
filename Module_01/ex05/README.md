# Exercise 05: Harl 2.0

## Summary
Create a `Harl` class with four private member functions: `debug`, `info`, `warning`, and `error`. Add a public function `void complain(std::string level)` that calls the appropriate private function based on the passed `level`. Use pointers to member functions to avoid `if/else` structures.

## Files to Submit
- `Makefile`
- `main.cpp`
- `Harl.{h, hpp}`
- `Harl.cpp`

## Compilation and Execution

### Compilation
```bash
make
```

### Execution
```bash
./harl2.0
```

### Sample Output
```bash
[ DEBUG ]
I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!
[ INFO ]
I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!
[ WARNING ]
I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.
[ ERROR ]
This is unacceptable! I want to speak to the manager now.
```
