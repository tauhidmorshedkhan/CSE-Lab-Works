# 02 – Tab Escape Sequence `\t`

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that uses the tab escape sequence `\t` together with `\n` to print team names and a match score with indentation.

## Key Features (New in This Program)
&emsp;&emsp;**`\t` (horizontal tab escape sequence)**: moves the cursor to the next tab stop, creating a horizontal gap. It is used to indent text.<br>
&emsp;&emsp;**`\n\t` (combination)**: `\n` starts a new line and `\t` indents it. Together they print an indented line.<br>
&emsp;&emsp;**Special characters inside a string**: symbols such as `:`, `(`, `-` and `)` are printed as normal text.<br>
&emsp;&emsp;**Single `printf()` for many lines**: one function call prints four lines, because `\n` and `\t` are placed inside the string.<br>

## Escape Sequences Used
&emsp;&emsp;`\n`: new line (learned in Program 01).<br>
&emsp;&emsp;`\t`: horizontal tab (new in this program).<br>

## Sample Output
```text
Team A
Team B
        Team A
        Score: (3 - 1)
```
&emsp;&emsp;The gap before the last two lines is one tab. Its width depends on the terminal (usually 8 characters).<br>

## How to Compile and Run
```bash
gcc Tab-Escape-Sequence.c -o Tab-Escape-Sequence
./Tab-Escape-Sequence
```

## Files
- `Tab-Escape-Sequence.c`: prints text with `\n` and `\t`