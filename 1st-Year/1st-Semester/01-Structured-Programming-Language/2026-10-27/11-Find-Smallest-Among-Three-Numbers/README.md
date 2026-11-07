# 11 – Smallest of Three Numbers (Single and Multiple `printf()`)

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that takes three integers from the user and prints the smallest of them. Write it in two ways: one with a `printf()` statement in each branch and one with a single `printf()` after storing the answer in a variable.

## Logic Used
&emsp;&emsp;**Step 1:** if `a` is less than or equal to both `b` and `c`, then `a` is the smallest.<br>
&emsp;&emsp;**Step 2:** otherwise, compare `b` and `c`. If `b <= c`, then `b` is the smallest.<br>
&emsp;&emsp;**Step 3:** otherwise, `c` is the smallest.<br>
&emsp;&emsp;**Tie rule:** when two values are equal, the one that comes first (`a`, then `b`, then `c`) is chosen. The printed number is the same either way.<br>

## Key Features (New in This Program)
&emsp;&emsp;**`&&` (logical AND operator)**: gives true only when **both** conditions are true. `a <= b && a <= c` checks two conditions at once.<br>
&emsp;&emsp;**`<=` (less than or equal to)**: a relational operator that is true when the left value is smaller than or equal to the right value. It is used in both conditions (`a <= b`, `a <= c` and `b <= c`), so the earlier variable wins when values are equal.<br>
&emsp;&emsp;**`if - else if - else` ladder**: chooses one of three paths. Only the first true condition runs.<br>
&emsp;&emsp;**Reading three values in one `scanf()`**: `scanf("%d %d %d", &a, &b, &c);` stores three integers.<br>
&emsp;&emsp;**Why only `b` and `c` are compared in the `else if`**: when the first condition fails, `a` cannot be the smallest, so the earlier work is reused.<br>
&emsp;&emsp;**Result variable (`min`)**: stores the answer in each branch, so the program needs only one `printf()` at the end.<br>

## Two Methods Compared

| Point | Multiple `printf()` | Single `printf()` |
|---|---|---|
| File | `Smallest-Number-Multiple-Printf.c` | `Smallest-Number-Single-Printf.c` |
| Extra variable | none | `min` |
| Number of `printf()` for the result | 3 (one in each branch) | 1 (after the `if` ladder) |
| Output text repeated | 3 times | once |
| Changing the message later | edit 3 places | edit 1 place |
| Output | same | same |

## Sample Input / Output
**Run 1**
```text
Enter three integer numbers: 5 2 8
The smallest number is: 2
```

**Run 2**
```text
Enter three integer numbers: 3 7 9
The smallest number is: 3
```

**Run 3**
```text
Enter three integer numbers: 9 4 1
The smallest number is: 1
```

**Run 4: Equal numbers**
```text
Enter three integer numbers: 4 4 4
The smallest number is: 4
```

**Run 5: Tie between the last two numbers**
```text
Enter three integer numbers: 9 2 2
The smallest number is: 2
```

## How to Compile and Run
```bash
gcc Smallest-Number-Multiple-Printf.c -o smallest_multiple
./smallest_multiple

gcc Smallest-Number-Single-Printf.c -o smallest_single
./smallest_single
```

## Files
- `Smallest-Number-Multiple-Printf.c`: a `printf()` in each branch
- `Smallest-Number-Single-Printf.c`: stores the result in `min` and uses one `printf()`