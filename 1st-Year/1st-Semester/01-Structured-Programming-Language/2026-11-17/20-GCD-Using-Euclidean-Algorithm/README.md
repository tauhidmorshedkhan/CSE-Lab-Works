# 20 – GCD Using the Euclidean Algorithm

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that takes two positive integers from the user and finds their GCD (Greatest Common Divisor, also called HCF) using the Euclidean algorithm. If either number is not positive, print an error message and stop.

## Assumption
&emsp;&emsp;Every input is assumed to be an integer, so the program does not check whether `scanf()` really read a number.<br>

## Algorithm (Euclidean Algorithm)
&emsp;&emsp;**Step 1:** read the two numbers `a` and `b` and check that both are at least 1.<br>
&emsp;&emsp;**Step 2:** while `b` is not 0, find the remainder of `a` divided by `b`.<br>
&emsp;&emsp;**Step 3:** replace `a` by the old `b`, and replace `b` by the remainder.<br>
&emsp;&emsp;**Step 4:** when `b` becomes 0, the value of `a` is the GCD.<br>

## Example (48 and 18)

| Step | `a` | `b` | Remainder `a % b` |
|---|---|---|---|
| 1 | 48 | 18 | 12 |
| 2 | 18 | 12 | 6 |
| 3 | 12 | 6 | 0 |
| End | 6 | 0 | GCD = 6 |

## Key Features (New in This Program)
&emsp;&emsp;**Euclidean algorithm**: a method to find the GCD of two numbers. It uses the rule gcd(a, b) = gcd(b, a % b) and stops when the second number is 0.<br>
&emsp;&emsp;**`||` (logical OR operator)**: gives true when **at least one** of its conditions is true. `a < 1 || b < 1` is true if either number is invalid.<br>
&emsp;&emsp;**Updating two variables with `temp`**: `temp` keeps the old value of `b`, so `b` can receive the remainder and then `a` can receive the old `b`.<br>
&emsp;&emsp;**Printing the message before the loop**: the loop changes `a` and `b`, so the line "GCD of ... and ..." is printed first, while they still hold the original numbers.<br>
&emsp;&emsp;**Result left in a variable**: after the loop, `a` holds the answer and is printed at the end.<br>

## Concepts Reused From Earlier Programs
&emsp;&emsp;**`while` loop and `!=` in the loop condition** (Programs 18 and 19).<br>
&emsp;&emsp;**`%` (remainder operator)** (Programs 05 and 19).<br>
&emsp;&emsp;**Reading several integers with one `scanf()`** (Programs 07 and 11).<br>
&emsp;&emsp;**Input validation with `if` and early exit with `return 1;`** (Programs 09, 10, 13, 16, 18 and 19).<br>
&emsp;&emsp;**`temp` variable** (Program 16, where it was used for swapping).<br>
&emsp;&emsp;**Printing two values in one `printf()`** (Program 10).<br>

## Sample Input / Output
**Run 1**
```text
Enter two positive integers: 48 18
GCD of 48 and 18 is: 6
```

**Run 2: Numbers with no common divisor except 1**
```text
Enter two positive integers: 17 5
GCD of 17 and 5 is: 1
```

**Run 3: Smaller number first**
```text
Enter two positive integers: 18 48
GCD of 18 and 48 is: 6
```

**Run 4: Equal numbers**
```text
Enter two positive integers: 7 7
GCD of 7 and 7 is: 7
```

**Run 5: Zero (invalid)**
```text
Enter two positive integers: 0 5
Both numbers must be positive.
```

**Run 6: Negative number (invalid)**
```text
Enter two positive integers: -4 8
Both numbers must be positive.
```

## How to Compile and Run
```bash
gcc GCD-Using-Euclidean-Algorithm.c -o gcd
./gcd
```

## Files
- `GCD-Using-Euclidean-Algorithm.c`: finds the GCD of two positive integers using the Euclidean algorithm