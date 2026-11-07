# 08 – Factorial of a Number (Decrementing and Incrementing Loop)

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that takes a number `n` from the user and finds its factorial using a `for` loop. Write it in two ways: one with a decrementing loop and one with an incrementing loop.

## Formula Used
&emsp;&emsp;**n!** = n × (n − 1) × (n − 2) × … × 2 × 1<br>
&emsp;&emsp;**0!** = 1<br>
&emsp;&emsp;Example: 5! = 5 × 4 × 3 × 2 × 1 = 120<br>

## Key Features (New in This Program)
&emsp;&emsp;**`for` loop**: repeats a block of code a fixed number of times. Syntax: `for (initialization; condition; update)`.<br>
&emsp;&emsp;**Loop counter (`i`)**: a variable that controls how many times the loop runs.<br>
&emsp;&emsp;**`i--` (decrement operator)**: reduces `i` by 1. Used in the decrementing loop.<br>
&emsp;&emsp;**`i++` (increment operator)**: increases `i` by 1. Used in the incrementing loop.<br>
&emsp;&emsp;**`>=` and `<=` (relational operators)**: loop conditions that include the boundary value (1 or `n`).<br>
&emsp;&emsp;**Accumulator pattern**: `fact = fact * i;` updates a running result in every iteration.<br>
&emsp;&emsp;**Initial value `fact = 1`**: 1 is the neutral value for multiplication. Starting from 0 would give 0 every time.<br>
&emsp;&emsp;**Initialization at declaration**: `int n, i, fact = 1;` declares three variables and gives a value to one of them.<br>

## Two Methods Compared

| Point | Decrementing Loop | Incrementing Loop |
|---|---|---|
| Loop header | `for (i = n; i >= 1; i--)` | `for (i = 1; i <= n; i++)` |
| Counter starts at | `n` | `1` |
| Order of multiplication | n × (n−1) × … × 1 | 1 × 2 × … × n |
| Number of iterations | `n` | `n` |
| Result | same | same |

## Sample Input / Output
**Run 1**
```text
Input : 5
Output: The Factorial is 120
```

**Run 2**
```text
Input : 0
Output: The Factorial is 1
```

## How to Compile and Run
```bash
gcc Find-Factorial-Of-A-Number-Using-Decrementing-Loop.c -o factorial_dec
./factorial_dec

gcc Find-Factorial-Of-A-Number-Using-Incrementing-Loop.c -o factorial_inc
./factorial_inc
```

## Files
- `Find-Factorial-Of-A-Number-Using-Decrementing-Loop.c`: counter goes from `n` down to 1
- `Find-Factorial-Of-A-Number-Using-Incrementing-Loop.c`: counter goes from 1 up to `n`