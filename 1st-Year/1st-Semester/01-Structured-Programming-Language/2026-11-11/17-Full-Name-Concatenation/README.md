# 17 – Full Name Using String Concatenation

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that reads a first name, a middle name and a last name from the user, joins them into one full name with a space between the names, and prints the full name.

## Logic Used
&emsp;&emsp;**Step 1:** read the three names into three character arrays.<br>
&emsp;&emsp;**Step 2:** copy the first name into the `full_name` array.<br>
&emsp;&emsp;**Step 3:** append a space, then the middle name.<br>
&emsp;&emsp;**Step 4:** append another space, then the last name.<br>
&emsp;&emsp;**Step 5:** print the full name.<br>

## Key Features (New in This Program)
&emsp;&emsp;**String**: a sequence of characters stored in a `char` array and ended by the null character `'\0'`. `char first[10];` can hold a name of up to 9 characters.<br>
&emsp;&emsp;**`#include <string.h>`**: the header file for string functions.<br>
&emsp;&emsp;**`%s` (format specifier)**: used with `scanf()` and `printf()` for a string.<br>
&emsp;&emsp;**`scanf("%s", ...)` without `&`**: the name of an array already stands for the address of its first element, so `&` is not used. `scanf("%s", ...)` reads one word and stops at the first space or newline.<br>
&emsp;&emsp;**`%9s` (width limit)**: reads at most 9 characters, which leaves one place in a 10-character array for `'\0'`. It protects the array from overflowing.<br>
&emsp;&emsp;**`strcpy(destination, source)`**: copies a string from `source` into `destination`, including the `'\0'`.<br>
&emsp;&emsp;**`strcat(destination, source)`**: appends `source` to the end of `destination`.<br>
&emsp;&emsp;**String literal `" "`**: a string in double quotes, used here as a separator. `strcat()` needs a string, not a single character like `' '`.<br>
&emsp;&emsp;**Choosing an array size**: `full_name[30]` is exactly large enough for 9 + 1 + 9 + 1 + 9 characters plus the `'\0'`.<br>

## Concepts Reused From Earlier Programs
&emsp;&emsp;**`char` type** (Programs 06 and 13). A string is an array of `char`.<br>
&emsp;&emsp;**Array declaration** (Programs 12, 14 and 15).<br>
&emsp;&emsp;**Prompts with `printf()` and input with `scanf()`** (Programs 03 to 07).<br>

## Limitations
&emsp;&emsp;**One word per name**: `scanf("%9s", ...)` stops at a space, so a name such as "Mary Ann" cannot be entered as one name.<br>
&emsp;&emsp;**At most 9 characters per name**: extra characters stay in the input and are read by the next `scanf()`.<br>

## Sample Input / Output
**Run 1**
```text
Enter your first name: Rahim
Enter your middle name: Uddin
Enter your last name: Khan
Your full name is: Rahim Uddin Khan
```

**Run 2: A name with exactly 9 characters**
```text
Enter your first name: Abdul
Enter your middle name: Karim
Enter your last name: Chowdhury
Your full name is: Abdul Karim Chowdhury
```

## How to Compile and Run
```bash
gcc 17-Full-Name-Concatenation.c -o fullname
./fullname
```

## Files
- `17-Full-Name-Concatenation.c`: reads three names and joins them into one full name using `strcpy()` and `strcat()`