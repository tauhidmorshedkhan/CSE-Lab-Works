# Largest of Three Numbers (Single and Multiple `printf()`)

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that takes three integers from the user and prints the largest of them. Write it in two ways: one with a `printf()` statement in each branch of an `if - else if - else` ladder, and one that keeps the largest value so far in a variable and uses a single `printf()`.

## Logic Used (Multiple `printf()` File)
&emsp;&emsp;**Step 1:** if `a` is greater than or equal to both `b` and `c`, then `a` is the largest.<br>
&emsp;&emsp;**Step 2:** otherwise, compare `b` and `c`. If `b >= c`, then `b` is the largest.<br>
&emsp;&emsp;**Step 3:** otherwise, `c` is the largest.<br>
&emsp;&emsp;Each branch prints its own result.<br>

## Logic Used (Single `printf()` File)
&emsp;&emsp;**Step 1:** assume the first number `a` is the largest and store it in `max`.<br>
&emsp;&emsp;**Step 2:** if `b` is greater than `max`, store `b` in `max`.<br>
&emsp;&emsp;**Step 3:** if `c` is greater than `max`, store `c` in `max`.<br>
&emsp;&emsp;**Step 4:** print `max` once.<br>

## Key Features
&emsp;&emsp;**Two separate `if` statements one after the other** (new in this program): in the Single `printf()` file, both `if` statements are always checked. In an `if - else if` ladder, the remaining conditions are skipped as soon as one is true.<br>
&emsp;&emsp;**Nothing else is new in syntax.** This program applies earlier ideas to a new problem. It is the mirror of the Smallest of Three Numbers program.<br>

## Concepts Reused From Earlier Programs
&emsp;&emsp;**`&&` (logical AND), `if - else if - else` ladder and reading three values with one `scanf()`** (Program 11, Smallest of Three Numbers).<br>
&emsp;&emsp;**`>=` relational operator** (Program 08, as `i >= 1`).<br>
&emsp;&emsp;**Result variable that stores the answer, with one `printf()` at the end** (Program 11).<br>
&emsp;&emsp;**"Assume the first value is the largest, then update it"** (Program 12, where the maximum of an array was found).<br>
&emsp;&emsp;**`%d`, prompts and `printf()` with a variable** (Programs 03 to 05).<br>

## Two Methods Compared

| Point | Multiple `printf()` (ladder) | Single `printf()` (`max` variable) |
|---|---|---|
| File | `Largest-Number-Multiple-Printf.c` | `Largest-Number-Single-Printf.c` |
| Extra variable | none | `max` |
| Number of `printf()` for the result | 3 (one in each branch) | 1 |
| Comparisons made | 1 to 3 (stops at the first true condition) | always 2 |
| Structure | one `if - else if - else` ladder | two separate `if` statements |
| Easy to extend to more numbers | no, the ladder gets longer | yes, add one more `if` (or use a loop) |
| Result | the same largest number | the same largest number |

## Sample Input / Output
**Multiple `printf()` file**
```text
Enter 3 integer numbers:
5 9 3
The largest number is: 9
```

**Single `printf()` file**
```text
Enter 3 integer numbers:
5 9 3
The largest number is: 9
```

**More runs (both files find the same number)**

| Input | Largest |
|---|---|
| `8 2 6` | 8 |
| `4 7 10` | 10 |
| `6 6 6` | 6 |
| `-5 -2 -9` | -2 |

## How to Compile and Run
```bash
gcc Largest-Number-Multiple-Printf.c -o largest_multiple
./largest_multiple

gcc Largest-Number-Single-Printf.c -o largest_single
./largest_single
```

## Files
- `Largest-Number-Multiple-Printf.c`: finds the largest number with an `if - else if - else` ladder and a `printf()` in each branch
- `Largest-Number-Single-Printf.c`: finds the largest number with a `max` variable and two `if` statements, then prints it once
