# 18 – Bubble Sort with User-Selected Order

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that first asks whether to sort in ascending order (option 1) or descending order (option 2), then takes the number of elements `n`, and then takes `n` integers from the user. Sort the array with bubble sort in the chosen order and print it. If the choice is not 1 or 2, or `n` is less than 1, print an error message and stop immediately.

## Assumption
&emsp;&emsp;Every input is assumed to be an integer, so the program does not check whether `scanf()` really read a number.<br>

## Algorithm (Bubble Sort, Either Order)
&emsp;&emsp;**Step 1:** read the choice (`1` for ascending, `2` for descending) and check that it is 1 or 2.<br>
&emsp;&emsp;**Step 2:** read `n` and check that it is at least 1.<br>
&emsp;&emsp;**Step 3:** read the `n` elements.<br>
&emsp;&emsp;**Step 4:** compare each pair of neighbouring elements. For **ascending**, swap when the left element is greater than the right one. For **descending**, swap when the left element is smaller than the right one.<br>
&emsp;&emsp;**Step 5:** repeat the passes, ignoring the already sorted end part, until the array is sorted.<br>
&emsp;&emsp;**Step 6:** print the array.<br>

## Order and the Comparison Operator

| Order | Swap condition | What each pass moves to the end |
|---|---|---|
| Ascending (option 1) | `values[j] > values[j + 1]` | the largest remaining value |
| Descending (option 2) | `values[j] < values[j + 1]` | the smallest remaining value |

## Key Features (New in This Program)
&emsp;&emsp;**Sorting order chosen by the user**: the program reads a choice and runs the matching sort. The only difference between the two sorts is the comparison operator (`>` or `<`).<br>
&emsp;&emsp;**`!=` (not equal to)**: a relational operator that is true when the two values are different. `option != 1` is true for every choice except 1.<br>
&emsp;&emsp;**Validating a choice with `!=` and `&&`**: `option != 1 && option != 2` is true only when the choice is neither 1 nor 2, so it detects an invalid choice.<br>
&emsp;&emsp;**Choice asked and validated first**: an invalid choice stops the program before the number of elements or the elements are asked.<br>
&emsp;&emsp;**`switch` with integer case labels**: `case 1:` and `case 2:` select the block to run. (Program 06 used character labels such as `case 'c':`.)<br>
&emsp;&emsp;**`switch` without `default`**: not needed here, because the choice has already been validated before the `switch`.<br>
&emsp;&emsp;**Common code after the `switch`**: `break` leaves the `switch`, and the printing loop after it runs once for both orders. The label text is printed inside each case, before the shared output.<br>
&emsp;&emsp;**Braces around each `case` body**: `{ }` groups the statements of one case, and the loop counters `i` and `j` exist only inside that block.<br>
&emsp;&emsp;**A variable inside the prompt text**: `printf("Enter %d elements ...", n);` shows the value the user entered for `n`.<br>

## Concepts Reused From Earlier Programs
&emsp;&emsp;**Bubble sort: nested loops, loop bound `n - i - 1`, swapping with `temp`** (Program 16).<br>
&emsp;&emsp;**Variable-length array declared after the validation** (Program 16).<br>
&emsp;&emsp;**`switch`, `case` and `break`** (Program 06).<br>
&emsp;&emsp;**`&&` (logical AND)** (Program 11).<br>
&emsp;&emsp;**Early exit with `return 1;` for invalid input** (Programs 09, 10, 13 and 16).<br>
&emsp;&emsp;**Reading and printing an array with a loop** (Program 12).<br>
&emsp;&emsp;**Two-line prompt with `\n` in one `printf()`** (Program 01).<br>

## Sample Input / Output
**Run 1: Ascending order**
```text
Enter 1 for ascending order or 2 for descending order.
Enter your choice: 1
Enter the number of elements: 5
Enter 5 elements separated by spaces: 5 1 4 2 8
Sorted array in ascending order: 1 2 4 5 8 
```

**Run 2: Descending order**
```text
Enter 1 for ascending order or 2 for descending order.
Enter your choice: 2
Enter the number of elements: 5
Enter 5 elements separated by spaces: 5 1 4 2 8
Sorted array in descending order: 8 5 4 2 1 
```

**Run 3: Invalid choice (stops at once)**
```text
Enter 1 for ascending order or 2 for descending order.
Enter your choice: 3
Invalid choice: please enter 1 or 2.
```

**Run 4: Invalid number of elements**
```text
Enter 1 for ascending order or 2 for descending order.
Enter your choice: 1
Enter the number of elements: 0
Invalid input: number of elements must be at least 1.
```

&emsp;&emsp;Note: a space is printed after every element, so each sorted line ends with one space.<br>

## How to Compile and Run
```bash
gcc 18-Bubble-Sort-with-User-Selected-Order.c -o bubble_order
./bubble_order
```

## Files
- `18-Bubble-Sort-with-User-Selected-Order.c`: sorts `n` integers in ascending or descending order, as chosen by the user