# 01 – Printing Name, Roll Number and Favorite Subject Using `printf()`

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program to print my name, my roll number and my favorite subject on separate lines, first with a single `printf()` and then with multiple `printf()` statements.

## Key Features (New in This Program)
&emsp;&emsp;**`#include <stdio.h>`**: a preprocessor directive that adds the Standard Input Output header, which contains the declaration of `printf()`.<br>
&emsp;&emsp;**`int main()`**: the entry point of every C program. Execution starts here.<br>
&emsp;&emsp;**`printf()`**: a library function that prints formatted output to the screen.<br>
&emsp;&emsp;**`"..."` (string literal)**: the text inside double quotes is printed exactly as written, including spaces and symbols such as `:`.<br>
&emsp;&emsp;**`\n` (newline escape sequence)**: moves the cursor to the next line. Without it, name, roll number and subject would print on one line.<br>
&emsp;&emsp;**`;` (semicolon)**: ends every statement in C.<br>
&emsp;&emsp;**`return 0;`**: tells the operating system that the program ended successfully.<br>
&emsp;&emsp;**`{ }` (curly braces)**: mark the start and end of the function body.<br>

## Single `printf()` vs Multiple `printf()`
&emsp;&emsp;**Single:** one function call with `\n` placed between the three pieces of text. It is shorter.<br>
&emsp;&emsp;**Multiple:** one function call per line. It is easier to read and edit.<br>
&emsp;&emsp;Both give the **same output**.<br>

## Sample Output
```text
Name: Your Name
Roll: Your Roll Number
Favorite Subject: Your Favorite Subject
```

## How to Compile and Run
```bash
gcc Newline-Single-Printf.c -o Newline-Single-Printf
./Newline-Single-Printf

gcc Newline-Multiple-Printf.c -o Newline-Multiple-Printf
./Newline-Multiple-Printf
```

## Files
- `Newline-Single-Printf.c`: one `printf()` with `\n`
- `Newline-Multiple-Printf.c`: three separate `printf()` calls