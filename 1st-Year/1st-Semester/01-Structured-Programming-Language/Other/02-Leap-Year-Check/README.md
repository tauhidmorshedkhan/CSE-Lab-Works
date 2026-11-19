# Leap Year Check

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that takes a year from the user and checks whether it is a leap year. If the year is less than 1, print an error message and stop.

## Leap Year Rule
&emsp;&emsp;**Rule 1:** a year divisible by 4 is a leap year.<br>
&emsp;&emsp;**Rule 2:** but a year divisible by 100 is **not** a leap year.<br>
&emsp;&emsp;**Rule 3:** but a year divisible by 400 **is** a leap year.<br>
&emsp;&emsp;**As one condition:** `(year % 4 == 0 && year % 100 != 0) || year % 400 == 0`<br>

## Key Features (New in This Program)
&emsp;&emsp;**Compound condition with `&&` and `||` together**: one `if` condition joins several tests. `&&` means "and", and `||` means "or".<br>
&emsp;&emsp;**Parentheses to group tests**: `(year % 4 == 0 && year % 100 != 0)` groups the first two tests, so it is clear that they belong together before the `||`.<br>
&emsp;&emsp;**Operator precedence in a condition**: `%` is done first, then `==` and `!=`, then `&&`, and finally `||`.<br>
&emsp;&emsp;**A rule written as one logical expression**: the three-part leap year rule becomes a single condition.<br>

## Concepts Reused From Earlier Programs
&emsp;&emsp;**`if - else`** (Program 05).<br>
&emsp;&emsp;**`%` and `==` to test divisibility** (Program 05 used `n % 2 == 0` for even numbers. Here the divisors are 4, 100 and 400).<br>
&emsp;&emsp;**`!=` (not equal to)** (Program 18).<br>
&emsp;&emsp;**`&&` (logical AND)** (Program 11).<br>
&emsp;&emsp;**`||` (logical OR)** (Program 20).<br>
&emsp;&emsp;**Input validation with `if` and early exit with `return 1;`** (Programs 09, 10, 13, 16, 18, 19 and 20).<br>
&emsp;&emsp;**`%d`, prompts and `printf()` with a variable** (Programs 03 to 05).<br>

## Sample Input / Output
**Run 1: Divisible by 4, not by 100**
```text
Enter a year (must be a positive integer): 2024
2024 is a leap year.
```

**Run 2: Not divisible by 4**
```text
Enter a year (must be a positive integer): 2023
2023 is not a leap year.
```

**Run 3: Divisible by 100, not by 400**
```text
Enter a year (must be a positive integer): 1900
1900 is not a leap year.
```

**Run 4: Divisible by 400**
```text
Enter a year (must be a positive integer): 2000
2000 is a leap year.
```

**Run 5: Zero (invalid)**
```text
Enter a year (must be a positive integer): 0
Invalid input. Please enter a positive integer.
```

**Run 6: Negative year (invalid)**
```text
Enter a year (must be a positive integer): -2024
Invalid input. Please enter a positive integer.
```

## How to Compile and Run
```bash
gcc Leap-Year-Check.c -o leapyear
./leapyear
```

## Files
- `Leap-Year-Check.c`: checks whether a given positive year is a leap year
