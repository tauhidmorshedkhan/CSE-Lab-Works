# 03 – Area and Perimeter of a Circle

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that takes the radius of a circle from the user and prints the area and the perimeter of the circle.

## Formulas Used
&emsp;&emsp;**Area** = π × r × r<br>
&emsp;&emsp;**Perimeter** = 2 × π × r<br>
&emsp;&emsp;Here, π = 3.1416 and r = radius.<br>

## Key Features (New in This Program)
&emsp;&emsp;**`float`**: a data type for numbers with a decimal point (real numbers). It is used here because the radius, area and perimeter may be fractional.<br>
&emsp;&emsp;**`float pi = 3.1416, area, perimeter, radius;`**: declares several variables of the same type in one statement. `pi` is also initialized in the same line.<br>
&emsp;&emsp;**Variable initialization**: giving a value to a variable at the time of declaration (`pi = 3.1416`).<br>
&emsp;&emsp;**`scanf()`**: a library function that reads input from the keyboard. It also comes from `<stdio.h>`.<br>
&emsp;&emsp;**`%f` (format specifier)**: tells `printf()` and `scanf()` that the value is a `float`.<br>
&emsp;&emsp;**`&` (address-of operator)**: `&radius` gives `scanf()` the memory address of `radius`, so the input can be stored there.<br>
&emsp;&emsp;**`%.3f` (precision)**: prints a `float` with exactly 3 digits after the decimal point.<br>
&emsp;&emsp;**`=` (assignment operator)**: stores the value of the right side in the variable on the left side.<br>
&emsp;&emsp;**`*` (multiplication operator) and `( )`**: used to write the formulas. Parentheses make the order of calculation clear.<br>
&emsp;&emsp;**Prompt without `\n`**: `printf("Enter the radius of the circle: ");` keeps the cursor on the same line, so the user types the input right after the message.<br>

## Sample Input / Output
```text
Enter the radius of the circle: 5
The area of the circle is 78.540
The perimeter of the circle is 31.416
```

## How to Compile and Run
```bash
gcc Area-and-Perimeter-of-the-Circle.c -o Area-and-Perimeter-of-the-Circle
./Area-and-Perimeter-of-the-Circle
```

## Files
- `Area-and-Perimeter-of-the-Circle.c`: reads the radius and prints the area and perimeter