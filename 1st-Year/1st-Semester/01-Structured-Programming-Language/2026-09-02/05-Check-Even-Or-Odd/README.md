# 05 – Check Even or Odd

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that takes an integer from the user and checks whether the number is even or odd.

## Logic Used
&emsp;&emsp;A number is **even** if it is divisible by 2 (remainder 0 when divided by 2).<br>
&emsp;&emsp;Otherwise, the number is **odd**.<br>

## Key Features (New in This Program)
&emsp;&emsp;**`int`**: a data type for whole numbers (integers).<br>
&emsp;&emsp;**`%d` (format specifier)**: used with `printf()` and `scanf()` for `int` values.<br>
&emsp;&emsp;**`%` (modulus operator)**: gives the remainder of a division. `10 % 2` is `0` and `7 % 2` is `1`.<br>
&emsp;&emsp;**`==` (equality operator)**: checks whether two values are equal and gives true or false. It is different from `=`, which is assignment.<br>
&emsp;&emsp;**`if` statement**: runs a block of code only when its condition is true.<br>
&emsp;&emsp;**`else` statement**: runs a block of code when the `if` condition is false.<br>
&emsp;&emsp;**`{ }` (code block)**: groups the statements that belong to `if` or `else`.<br>
&emsp;&emsp;**Decision making**: this is the first program where the output depends on the input, so the program chooses between two paths.<br>

## Sample Input / Output
**Run 1**
```text
Enter a number: 10
10 is an EVEN number
```

**Run 2**
```text
Enter a number: 7
7 is an ODD number
```

## How to Compile and Run
```bash
gcc Check-Even-Or-Odd.c -o Check-Even-Or-Odd
./Check-Even-Or-Odd
```

## Files
- `Check-Even-Or-Odd.c`: reads a number and prints whether it is even or odd