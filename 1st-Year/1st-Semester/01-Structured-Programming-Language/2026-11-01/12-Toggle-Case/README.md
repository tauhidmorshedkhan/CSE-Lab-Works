# 12 – Toggle the Case of a Letter (Assign and Direct Methods)

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that reads one character from the user. If it is a lowercase letter, print its uppercase form. If it is an uppercase letter, print its lowercase form. If it is not a letter, print an error message and stop. Write it in two ways: one that assigns the converted character back to the variable and one that passes the converted character directly to `putchar()`.

## Logic Used
&emsp;&emsp;**Step 1:** read one character.<br>
&emsp;&emsp;**Step 2:** if it is a lowercase letter, print a label and convert it to uppercase.<br>
&emsp;&emsp;**Step 3:** otherwise, if it is an uppercase letter, print a label and convert it to lowercase.<br>
&emsp;&emsp;**Step 4:** otherwise, it is not a letter. Print an error message and exit with status `1`.<br>
&emsp;&emsp;**Step 5:** print the converted character and a newline.<br>

## Key Features (New in This Program)
&emsp;&emsp;**`#include <ctype.h>`**: the header file for character-testing and character-conversion functions.<br>
&emsp;&emsp;**`getchar()`**: reads one character from the keyboard and returns it as an `int`.<br>
&emsp;&emsp;**`putchar()`**: prints one character on the screen.<br>
&emsp;&emsp;**`islower()` and `isupper()`**: check whether a character is a lowercase or an uppercase letter. They give a non-zero value (true) or `0` (false).<br>
&emsp;&emsp;**`toupper()` and `tolower()`**: convert a letter to uppercase or lowercase. They return the new character and do not change the original variable.<br>
&emsp;&emsp;**`int` variable for a character**: `getchar()` returns an `int`, so the variable that stores it is also an `int`.<br>
&emsp;&emsp;**Assigning a function result back to the same variable** (Assign method): `ch = toupper(ch);` replaces the old value of `ch`.<br>
&emsp;&emsp;**Function call inside another function call** (Direct method): `putchar(toupper(ch));` passes the result of `toupper()` straight to `putchar()`.<br>
&emsp;&emsp;**`printf()` and `putchar()` together**: `printf()` prints the text label and `putchar()` prints the single character after it.<br>

## Concepts Reused From Earlier Programs
&emsp;&emsp;**`if - else if - else` ladder** (Program 07).<br>
&emsp;&emsp;**Input prompt with `printf()`** (Programs 03 and 04).<br>
&emsp;&emsp;**Single-character input** (Program 06 read a `char` with `scanf("%c", ...)`. This program uses `getchar()` instead.)<br>
&emsp;&emsp;**Early exit with `return 1;` for invalid input** (Program 09).<br>
&emsp;&emsp;**Storing the result first and printing once** (Program 11, the `min` variable. The Assign method follows the same idea.)<br>

## Two Methods Compared

| Point | Assign (`Toggle-Case-Assign.c`) | Direct (`Toggle-Case-Direct.c`) |
|---|---|---|
| How the result is handled | stored back into `ch` | passed directly to `putchar()` |
| Number of `putchar()` calls | 1 (after the `if - else` chain) | 2 (one in each letter branch) |
| Original character kept? | no, `ch` is overwritten | yes, `ch` is never changed |
| Newline `printf("\n");` | once, after the chain | once, after the chain |
| Invalid input | message, then `return 1;` | message, then `return 1;` |
| Output | same | same |

## Sample Input / Output
**Run 1: Lowercase letter**
```text
Enter a letter: a
The uppercase letter is: A
```

**Run 2: Uppercase letter**
```text
Enter a letter: G
The lowercase letter is: g
```

**Run 3: Only the first character is used**
```text
Enter a letter: hello
The uppercase letter is: H
```

**Run 4: Digit (invalid)**
```text
Enter a letter: 5
Invalid input. Please enter an alphabetic letter.
```

**Run 5: Symbol (invalid)**
```text
Enter a letter: @
Invalid input. Please enter an alphabetic letter.
```

## How to Compile and Run
```bash
gcc Toggle-Case-Assign.c -o toggle_assign
./toggle_assign

gcc Toggle-Case-Direct.c -o toggle_direct
./toggle_direct
```

## Files
- `Toggle-Case-Assign.c`: stores the converted character in `ch`, then prints it with one `putchar()`
- `Toggle-Case-Direct.c`: prints the converted character directly with `putchar()` in each letter branch