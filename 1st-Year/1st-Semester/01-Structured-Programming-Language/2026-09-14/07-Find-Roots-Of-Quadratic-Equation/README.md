# 07 – Roots of a Quadratic Equation

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that takes the coefficients `a`, `b` and `c` of an equation `ax² + bx + c = 0` and finds its roots. The program must handle real and distinct roots, real and equal roots, complex roots, and the linear case (`a = 0`).

## Formulas Used
&emsp;&emsp;**Discriminant:** D = b² − 4ac<br>
&emsp;&emsp;**Roots:** x = (−b ± √D) / 2a<br>
&emsp;&emsp;**Linear equation (a = 0):** x = −c / b<br>
&emsp;&emsp;**Complex roots (D < 0):** x = −b / 2a ± (√(−D) / 2|a|) i<br>

## Cases Handled
&emsp;&emsp;**`a = 0` and `b = 0`**: no unique solution.<br>
&emsp;&emsp;**`a = 0` and `b ≠ 0`**: linear equation with one root.<br>
&emsp;&emsp;**`D > 0`**: two real and distinct roots.<br>
&emsp;&emsp;**`D = 0`**: two real and equal roots.<br>
&emsp;&emsp;**`D < 0`**: two complex conjugate roots.<br>

## Key Features (New in This Program)
&emsp;&emsp;**`#include <math.h>`**: adds the math library, which contains `sqrt()` and `fabs()`.<br>
&emsp;&emsp;**`sqrt()`**: returns the square root of a number. The argument must not be negative.<br>
&emsp;&emsp;**`fabs()`**: returns the absolute value of a floating-point number. Here it keeps the imaginary part positive.<br>
&emsp;&emsp;**`double`**: a floating-point type with more precision than `float` (about 15 digits). The math library functions work with `double`.<br>
&emsp;&emsp;**`%lf`**: format specifier for `double`. It is required in `scanf()`. Here it is also used in `printf()`.<br>
&emsp;&emsp;**Several inputs in one `scanf()`**: `scanf("%lf %lf %lf", &a, &b, &c);` reads three values separated by spaces.<br>
&emsp;&emsp;**Nested `if-else`**: an `if` inside another `if`. The inner check (`b == 0`) runs only when `a == 0`.<br>
&emsp;&emsp;**`else if` ladder**: tests several conditions in order (`d > 0`, `d == 0`, otherwise).<br>
&emsp;&emsp;**Relational operators `>` and `==`**: used to compare the discriminant with zero.<br>
&emsp;&emsp;**Multi-line output in one `printf()`**: several `\n` characters print the type of the roots and the roots on separate lines.<br>
&emsp;&emsp;**`-lm` compiler flag**: links the math library when compiling with `gcc` on Linux or macOS.<br>

## Sample Input / Output
**Run 1: Real and distinct roots**
```text
Enter a, b, c: 1 -3 2
Real and distinct roots.
Root 1 = 2.00
Root 2 = 1.00
```

**Run 2: Real and equal roots**
```text
Enter a, b, c: 1 2 1
Real and equal roots.
Root = -1.00
```

**Run 3: Complex roots**
```text
Enter a, b, c: 1 2 5
Complex roots.
Root 1 = -1.00 + 2.00i
Root 2 = -1.00 - 2.00i
```

**Run 4: Linear equation (a = 0)**
```text
Enter a, b, c: 0 2 -6
Linear equation. Root = 3.00
```

**Run 5: No unique solution**
```text
Enter a, b, c: 0 0 5
No unique solution.
```

## How to Compile and Run
```bash
gcc Find-Roots-Of-Quadratic-Equation.c -o Find-Roots-Of-Quadratic-Equation -lm
./Find-Roots-Of-Quadratic-Equation
```

## Files
- `Find-Roots-Of-Quadratic-Equation.c`: finds and prints the roots of a quadratic equation