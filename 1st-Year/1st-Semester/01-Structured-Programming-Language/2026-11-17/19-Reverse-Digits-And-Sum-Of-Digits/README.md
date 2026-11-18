# 19 – Reverse Digits and Sum of Digits

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that takes a positive integer from the user, prints its digits in reverse order, and prints the sum of its digits. If the number is not positive, print an error message and stop.

## Assumption
&emsp;&emsp;Every input is assumed to be an integer, so the program does not check whether `scanf()` really read a number.<br>

## Logic Used
&emsp;&emsp;**Step 1:** read the number and check that it is at least 1.<br>
&emsp;&emsp;**Step 2:** while the number is not 0, take its last digit with `number % 10`.<br>
&emsp;&emsp;**Step 3:** print that digit and add it to the sum.<br>
&emsp;&emsp;**Step 4:** remove the last digit with `number / 10`.<br>
&emsp;&emsp;**Step 5:** when the number becomes 0, print the sum.<br>

## Key Features (New in This Program)
&emsp;&emsp;**`while` loop**: repeats a block of code as long as its condition is true. The condition is checked **before** each repetition. It is used when the number of repetitions is not known in advance (here it equals the number of digits).<br>
&emsp;&emsp;**Loop ending when a value reaches 0**: `while (number != 0)` stops when every digit has been removed.<br>
&emsp;&emsp;**Last digit with `% 10`**: `number % 10` gives the last digit of a number. For example, `1234 % 10` is `4`.<br>
&emsp;&emsp;**Removing the last digit with integer division**: `number / 10` drops the last digit, because both operands are integers and the fraction is discarded. For example, `1234 / 10` is `123`.<br>
&emsp;&emsp;**`/=` (division assignment)**: `number /= 10;` means `number = number / 10;`. It works like `+=` from Program 14.<br>
&emsp;&emsp;**Changing the input variable inside the loop**: `number` is reduced in every pass, so its original value is not kept after the loop.<br>
&emsp;&emsp;**Printing digit by digit**: `printf("%d", digit);` has no `\n`, so each digit is printed right after the previous one.<br>
&emsp;&emsp;**`\n` at the start of a message**: `"\nThe sum of the digits is: ..."` ends the line of digits before the sum is printed.<br>
&emsp;&emsp;**Two results from one loop**: the same loop prints the reversed digits and builds the sum.<br>

## Concepts Reused From Earlier Programs
&emsp;&emsp;**`%` (remainder operator)** (Program 05).<br>
&emsp;&emsp;**`!=` (not equal to)** (Program 18).<br>
&emsp;&emsp;**`+=` and the accumulator pattern** (Programs 08, 09, 12 and 14).<br>
&emsp;&emsp;**Input validation with `if` and early exit with `return 1;`** (Programs 09, 10, 13, 16 and 18).<br>
&emsp;&emsp;**`%d` and prompts with `printf()` and `scanf()`** (Programs 03 to 05).<br>

## Sample Input / Output
**Run 1**
```text
Enter a positive integer: 1234
Digits in reverse order: 4321
The sum of the digits is: 10
```

**Run 2: Single digit**
```text
Enter a positive integer: 5
Digits in reverse order: 5
The sum of the digits is: 5
```

**Run 3: Number ending in zeros**
```text
Enter a positive integer: 1200
Digits in reverse order: 0021
The sum of the digits is: 3
```
&emsp;&emsp;The digits are printed one by one, so the zeros at the end of the number appear at the front of the reversed output.<br>

**Run 4: Zero (invalid)**
```text
Enter a positive integer: 0
The number must be positive.
```

**Run 5: Negative number (invalid)**
```text
Enter a positive integer: -45
The number must be positive.
```

## How to Compile and Run
```bash
gcc Reverse-Digits-And-Sum-Of-Digits.c -o digits
./digits
```

## Files
- `Reverse-Digits-And-Sum-Of-Digits.c`: prints the digits of a positive integer in reverse order and their sum