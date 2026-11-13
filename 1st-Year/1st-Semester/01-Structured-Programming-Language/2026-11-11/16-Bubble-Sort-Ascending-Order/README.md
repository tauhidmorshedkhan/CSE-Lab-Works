# 16 – Bubble Sort (Ascending Order)

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that takes `n` integers from the user, stores them in an array and sorts them in ascending order using the bubble sort algorithm. If `n` is less than 1, print an error message and stop.

## Assumption
&emsp;&emsp;Every input is assumed to be an integer, so the program does not check whether `scanf()` really read a number.<br>

## Algorithm (Bubble Sort)
&emsp;&emsp;**Step 1:** read `n` and check that it is at least 1.<br>
&emsp;&emsp;**Step 2:** read the `n` elements into an array.<br>
&emsp;&emsp;**Step 3:** compare each pair of neighbouring elements, starting from the first pair. If the left element is greater than the right element, swap them.<br>
&emsp;&emsp;**Step 4:** after one full pass, the largest element reaches the last position.<br>
&emsp;&emsp;**Step 5:** repeat the passes for the remaining elements, ignoring the already sorted end part, until the whole array is sorted.<br>
&emsp;&emsp;**Step 6:** print the sorted array.<br>
&emsp;&emsp;**Order:** a swap happens when the left element is **greater** than the right one, so smaller values move to the left and the array ends up in **ascending order** (smallest first). Changing `>` to `<` in the condition would give descending order.<br>

## Key Features (New in This Program)
&emsp;&emsp;**Bubble sort algorithm**: compares neighbouring elements and swaps them when they are in the wrong order, pass after pass, until the array is sorted.<br>
&emsp;&emsp;**Variable-length array**: `int values[n];` takes its size from the user at run time (C99). In the earlier array programs the size was fixed at 5.<br>
&emsp;&emsp;**Validation before the array declaration**: the array size depends on `n`, so `n` is checked first. A size of 0 or less would make the array declaration invalid.<br>
&emsp;&emsp;**Array declared after other statements**: the array is declared after `scanf()` and the validation, because its size depends on the value of `n`.<br>
&emsp;&emsp;**Nested `for` loops**: a loop inside another loop. The outer loop counts the passes and the inner loop compares the neighbours.<br>
&emsp;&emsp;**Loop bound `n - i - 1`**: after each pass, one more element is in its final place, so the inner loop can stop one step earlier.<br>
&emsp;&emsp;**Swapping with a temporary variable**: `temp` keeps one value safe while two array elements exchange places.<br>
&emsp;&emsp;**Expression as an array index**: `values[j + 1]` is the element right after `values[j]`.<br>
&emsp;&emsp;**A variable inside the prompt text**: `printf("Enter %d elements ...", n);` shows the value the user entered for `n`.<br>

## Concepts Reused From Earlier Programs
&emsp;&emsp;**Array declaration, indexing, and reading and printing with a loop** (Program 12).<br>
&emsp;&emsp;**`if` inside a `for` loop** (Programs 12 and 15).<br>
&emsp;&emsp;**Loop-scoped counter** `for (int i = 0; ...)` (Programs 09, 12 and 14).<br>
&emsp;&emsp;**Reading the number of items `n` from the user** (Programs 08, 09 and 10).<br>
&emsp;&emsp;**Input validation with `if` and early exit with `return 1;`** (Programs 09, 10 and 13).<br>

## Example Walkthrough
&emsp;&emsp;Input array: `5 1 4 2 8`<br>

| Pass | Swaps made | Array after the pass |
|---|---|---|
| 1 | 5↔1, 5↔4, 5↔2 | `1 4 2 5 8` |
| 2 | 4↔2 | `1 2 4 5 8` |
| 3 | none | `1 2 4 5 8` |
| 4 | none | `1 2 4 5 8` |

&emsp;&emsp;After pass 1, the largest value (8) is already at the end. After pass 2, the array is sorted, but this program still completes the remaining passes.<br>

## Sample Input / Output
**Run 1**
```text
Enter the number of elements: 5
Enter 5 elements separated by spaces: 5 1 4 2 8
Sorted array: 1 2 4 5 8 
```

**Run 2: Duplicates and negative numbers**
```text
Enter the number of elements: 6
Enter 6 elements separated by spaces: 3 -1 3 0 -5 2
Sorted array: -5 -1 0 2 3 3 
```

**Run 3: Single element**
```text
Enter the number of elements: 1
Enter 1 elements separated by spaces: 7
Sorted array: 7 
```

**Run 4: Invalid number of elements**
```text
Enter the number of elements: 0
Invalid input: number of elements must be at least 1.
```

&emsp;&emsp;Notes: a space is printed after every element, so each sorted line ends with one space. For `n = 1`, the prompt reads "Enter 1 elements", because the program always uses the word "elements". A negative `n` (such as `-3`) gives the same error message as `0`.<br>

## How to Compile and Run
```bash
gcc 16-Bubble-Sort-Ascending-Order -o bubble
./bubble
```

## Files
- `16-Bubble-Sort-Ascending-Order`: reads `n` integers, checks that `n` is valid and sorts them in ascending order with bubble sort