# Bubble Sort

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that takes `n` integers from the user, stores them in an array and sorts them in ascending order using the bubble sort algorithm.

## Algorithm (Bubble Sort)
&emsp;&emsp;**Step 1:** compare each pair of neighbouring elements, starting from the first pair.<br>
&emsp;&emsp;**Step 2:** if the left element is greater than the right element, swap them.<br>
&emsp;&emsp;**Step 3:** after one full pass, the largest element reaches the last position.<br>
&emsp;&emsp;**Step 4:** repeat the passes for the remaining elements, ignoring the already sorted end part, until the whole array is sorted.<br>

## Key Features (New in This Program)
&emsp;&emsp;**Bubble sort algorithm**: compares neighbouring elements and swaps them when they are in the wrong order, pass after pass, until the array is sorted.<br>
&emsp;&emsp;**Variable-length array**: `int values[n];` takes its size from the user at run time (C99). In the earlier array programs the size was fixed at 5.<br>
&emsp;&emsp;**Array declared after other statements**: the array is declared after `scanf()` has read `n`, because its size depends on that value.<br>
&emsp;&emsp;**Nested `for` loops**: a loop inside another loop. The outer loop counts the passes and the inner loop compares the neighbours.<br>
&emsp;&emsp;**Loop bound `n - i - 1`**: after each pass, one more element is in its final place, so the inner loop can stop one step earlier.<br>
&emsp;&emsp;**Swapping with a temporary variable**: `temp` keeps one value safe while two array elements exchange places.<br>
&emsp;&emsp;**Expression as an array index**: `values[j + 1]` is the element right after `values[j]`.<br>

## Concepts Reused From Earlier Programs
&emsp;&emsp;**Array declaration, indexing, and reading and printing with a loop** (Program 12).<br>
&emsp;&emsp;**`if` inside a `for` loop** (Programs 12 and 15).<br>
&emsp;&emsp;**Loop-scoped counter** `for (int i = 0; ...)` (Programs 09, 12 and 14).<br>
&emsp;&emsp;**Reading the number of items `n` from the user** (Programs 08, 09 and 10).<br>

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
Enter the elements separated by spaces: 5 1 4 2 8
Sorted array: 1 2 4 5 8 
```

**Run 2: Duplicates and negative numbers**
```text
Enter the number of elements: 6
Enter the elements separated by spaces: 3 -1 3 0 -5 2
Sorted array: -5 -1 0 2 3 3 
```

**Run 3: Single element**
```text
Enter the number of elements: 1
Enter the elements separated by spaces: 7
Sorted array: 7 
```

&emsp;&emsp;Note: a space is printed after every element, so each sorted line ends with one space.<br>

## How to Compile and Run
```bash
gcc Bubble_Sort.c -o bubble
./bubble
```

## Files
- `Bubble_Sort.c`: reads `n` integers and sorts them in ascending order with bubble sort