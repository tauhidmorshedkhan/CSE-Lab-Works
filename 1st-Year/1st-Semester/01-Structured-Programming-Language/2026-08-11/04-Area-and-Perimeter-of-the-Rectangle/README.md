# 04 – Area and Perimeter of a Rectangle

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that takes the width and the height of a rectangle from the user and prints the area and the perimeter of the rectangle.

## Formulas Used
&emsp;&emsp;**Area** = width × height<br>
&emsp;&emsp;**Perimeter** = 2 × (width + height)<br>

## Key Features (New in This Program)
&emsp;&emsp;**Multiple inputs**: two `scanf()` calls read two values (width and height), each with its own prompt message.<br>
&emsp;&emsp;**`+` (addition operator) inside `( )`**: in `2 * (width + height)` the parentheses force the addition to run before the multiplication. Without them, the result would be wrong.<br>
&emsp;&emsp;**Variables without initial values**: `width`, `height`, `area` and `perimeter` are declared without values. Each gets its value later from `scanf()` or from an assignment.<br>
&emsp;&emsp;**Reusing earlier concepts**: `float`, `scanf("%f", &variable)`, `%.3f` and the assignment operator `=` work exactly as in Program 03.<br>

## Sample Input / Output
```text
Enter Width: 5
Enter Height: 3
Area of the rectangle is 15.000
Perimeter of the rectangle is 16.000
```

## How to Compile and Run
```bash
gcc Area-and-Perimeter-of-the-Rectangle.c -o Area-and-Perimeter-of-the-Rectangle
./Area-and-Perimeter-of-the-Rectangle
```

## Files
- `Area-and-Perimeter-of-the-Rectangle.c`: reads width and height and prints the area and perimeter