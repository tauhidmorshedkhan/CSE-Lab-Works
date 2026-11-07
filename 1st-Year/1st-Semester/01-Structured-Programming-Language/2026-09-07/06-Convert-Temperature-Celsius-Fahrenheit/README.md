# 06 – Temperature Conversion (Celsius and Fahrenheit)

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that shows a menu and converts a temperature from Fahrenheit to Celsius or from Celsius to Fahrenheit, depending on the user's choice. If the user enters any other choice, the program prints an error message.

## Formulas Used
&emsp;&emsp;**Fahrenheit to Celsius:** C = (F − 32) × 5 / 9<br>
&emsp;&emsp;**Celsius to Fahrenheit:** F = (C × 9 / 5) + 32<br>

## Key Features (New in This Program)
&emsp;&emsp;**`char`**: a data type that stores a single character, such as `'c'` or `'f'`. Here it stores the menu choice.<br>
&emsp;&emsp;**`%c` (format specifier)**: used with `scanf()` and `printf()` for a single `char`.<br>
&emsp;&emsp;**`switch` statement**: selects one block of code out of many, based on the value of one variable. It is cleaner than a long `if-else` ladder.<br>
&emsp;&emsp;**`case 'c':` and `case 'f':`**: labels that are compared with the switch variable. A character constant is written in single quotes.<br>
&emsp;&emsp;**`default:`**: runs when no `case` matches. It works like the final `else`, and here it prints `Invalid choice` for wrong input.<br>
&emsp;&emsp;**`break`**: ends the matching case and exits the `switch`. Without it, execution would fall into the next case.<br>
&emsp;&emsp;**Menu-driven program**: the program shows options and does different work for each choice.<br>
&emsp;&emsp;**`5.0 / 9.0` (floating-point division)**: at least one operand is a decimal number, so the result keeps its fraction. `5 / 9` (integers) would give `0`.<br>
&emsp;&emsp;**Text and `%.2f` in one `printf()`**: a label such as `Temperature in Celsius is ` before the format specifier and a unit letter such as ` C` after it make the output self-explanatory. `%.2f` prints the value with 2 digits after the decimal point.<br>
&emsp;&emsp;**`\n` inside one `printf()`**: the two menu lines are printed with a single `printf()` call.<br>

## Sample Input / Output
**Run 1: Celsius to Fahrenheit**
```text
Press c for Fahrenheit to Celsius
Press f for Celsius to Fahrenheit
f
Enter temperature in Celsius: 100
Temperature in Fahrenheit is 212.00 F
```

**Run 2: Fahrenheit to Celsius**
```text
Press c for Fahrenheit to Celsius
Press f for Celsius to Fahrenheit
c
Enter temperature in Fahrenheit: 212
Temperature in Celsius is 100.00 C
```

**Run 3: Invalid choice**
```text
Press c for Fahrenheit to Celsius
Press f for Celsius to Fahrenheit
x
Invalid choice
```

## How to Compile and Run
```bash
gcc Convert-Temperature-Celsius-Fahrenheit.c -o Convert-Temperature-Celsius-Fahrenheit
./Convert-Temperature-Celsius-Fahrenheit
```

## Files
- `Convert-Temperature-Celsius-Fahrenheit.c`: menu-driven temperature converter using `switch` with a `default` case