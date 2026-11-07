# 09 – Factorial Series Sum: 1/1! + 2/2! + 3/3! + ... + n/n!

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that takes a positive integer `n` from the user and finds the sum of the series `1/1! + 2/2! + 3/3! + ... + n/n!`. If `n` is less than 1, print an error message and stop the program.

## Formula Used
&emsp;&emsp;**Sum** = Σ (i / i!), for i = 1 to n<br>
&emsp;&emsp;**Factorial:** i! = i × (i − 1) × … × 1<br>
&emsp;&emsp;Example (n = 3): 1/1 + 2/2 + 3/6 = 1 + 1 + 0.5 = 2.5<br>

## Key Features (New in This Program)
&emsp;&emsp;**Series sum with a loop**: one `for` loop calculates each term and adds it to a running total.<br>
&emsp;&emsp;**Updating the factorial inside the loop**: `fact = fact * i;` builds `i!` from `(i-1)!`, so there is no need for a nested loop.<br>
&emsp;&emsp;**`sum = sum + (i / fact);`**: the accumulator pattern with addition. `sum` starts at `0.0` because 0 is the neutral value for addition.<br>
&emsp;&emsp;**Mixed `int` and `double` division**: `i` is an `int` and `fact` is a `double`. C converts `i` to `double` automatically, so the division keeps its decimal part.<br>
&emsp;&emsp;**`double` for `fact`**: a factorial grows very fast and can overflow an `int`. A `double` can hold much larger values.<br>
&emsp;&emsp;**Input validation with `if`**: `if (n < 1)` checks the input before any calculation.<br>
&emsp;&emsp;**Early exit with `return 1;`**: inside the `if` block, `return` ends `main` immediately. A non-zero value (`1`) tells the operating system that the program ended with an error. The normal `return 0;` at the end means success.<br>
&emsp;&emsp;**Loop-scoped variable**: `for (int i = 1; i <= n; i++)` declares `i` inside the loop header. `i` exists only inside the loop (C99 and later).<br>
&emsp;&emsp;**`%lf` and `%.2lf`**: format specifiers for `double`. `.2` prints the result with 2 digits after the decimal point, rounded.<br>

## Sample Input / Output
**Run 1**
```text
Enter an integer number: 3
The sum is: 2.50
```

**Run 2**
```text
Enter an integer number: 5
The sum is: 2.71
```

**Run 3: Invalid input**
```text
Enter an integer number: 0
Invalid input. n must be a positive integer.
```

## How to Compile and Run
```bash
gcc Factorial-Series-Sum.c -o Factorial-Series-Sum
./Factorial-Series-Sum
```

## Files
- `Factorial-Series-Sum.c`: finds the sum of `1/1! + 2/2! + ... + n/n!`