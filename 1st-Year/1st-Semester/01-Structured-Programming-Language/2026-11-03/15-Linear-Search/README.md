# 15 – Linear Search in an Array (All Matches and First Match)

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that reads 5 integers into an array and a number to search for, then prints the position of the number in the array. If the number is not in the array, print a message. Write it in two ways: one that reports every match and one that stops at the first match.

## Algorithm (Linear Search)
&emsp;&emsp;**Step 1:** start from the first element of the array.<br>
&emsp;&emsp;**Step 2:** compare the current element with the number being searched.<br>
&emsp;&emsp;**Step 3:** if they are equal, report the position of the element.<br>
&emsp;&emsp;**Step 4:** move to the next element and repeat until the end of the array.<br>
&emsp;&emsp;**Step 5:** if no element matched, report that the number was not found.<br>

## Key Features (New in This Program)
&emsp;&emsp;**Linear search**: checks the elements one by one, from the first to the last, until the required value is found or the array ends.<br>
&emsp;&emsp;**`break` inside a loop**: ends the loop immediately and continues with the statement after the loop. (Earlier, `break` was used only inside `switch`.)<br>
&emsp;&emsp;**Flag value (`position = 0`)**: a variable that starts at `0` to mean "not found". After the loop, `position == 0` tells the program that no match occurred.<br>
&emsp;&emsp;**Index vs position (`i + 1`)**: array indexes start at 0, but people count from 1. Adding 1 converts an index into a position, and it also keeps `0` free as the "not found" value.<br>
&emsp;&emsp;**Printing inside the loop**: the program prints a message at the moment a match is found, so one run can print several lines (All-Matches version).<br>
&emsp;&emsp;**Not-found check after the loop**: the message "Number not found" is printed only when the loop has finished with no match.<br>

## Concepts Reused From Earlier Programs
&emsp;&emsp;**Array declaration, reading an array with a loop and looping through an array** (from Program 12).<br>
&emsp;&emsp;**`if` inside a `for` loop** (Program 12 used it to find the maximum).<br>
&emsp;&emsp;**`==` comparison** (Program 05).<br>
&emsp;&emsp;**Loop counter declared once at the top and reused** (`int n, i, fact = 1;` in Program 08).<br>
&emsp;&emsp;**Prompts with `printf()` and reading with `scanf()`** (Programs 03 to 07).<br>

## Two Methods Compared

| Point | All Matches (`Linear-Search-All-Matches.c`) | First Match (`Linear-Search-First-Match.c`) |
|---|---|---|
| `break` after a match | no | yes |
| Elements checked | always all 5 | up to and including the first match |
| Number appears twice | prints **two** lines | prints **one** line (the first position) |
| Value of `position` after the loop | the **last** matching position | the **first** matching position |
| Best use | when every occurrence matters | when only the first occurrence matters |
| Not found | same message | same message |

## Sample Input / Output
**Run 1: Number appears twice**

*All Matches*
```text
Enter 5 integers: 12 7 25 7 40
Enter the number to search: 7
Number found at position 2
Number found at position 4
```

*First Match*
```text
Enter 5 integers: 12 7 25 7 40
Enter the number to search: 7
Number found at position 2
```

**Run 2: Number appears once (both versions)**
```text
Enter 5 integers: 12 7 25 7 40
Enter the number to search: 25
Number found at position 3
```

**Run 3: Number not found (both versions)**
```text
Enter 5 integers: 12 7 25 7 40
Enter the number to search: 99
Number not found in the array.
```

## How to Compile and Run
```bash
gcc Linear-Search-All-Matches.c -o search_all
./search_all

gcc Linear-Search-First-Match.c -o search_first
./search_first
```

## Files
- `Linear-Search-All-Matches.c`: reports every position where the number is found
- `Linear-Search-First-Match.c`: stops after the first position where the number is found