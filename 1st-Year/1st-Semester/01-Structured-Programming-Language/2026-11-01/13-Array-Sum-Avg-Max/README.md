# 13 – Array: Sum, Average and Maximum

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that reads 5 integers into an array, prints the numbers, and then prints their sum, their average and the maximum number.

## Formulas and Logic Used
&emsp;&emsp;**Sum** = arr[0] + arr[1] + arr[2] + arr[3] + arr[4]<br>
&emsp;&emsp;**Average** = Sum / 5<br>
&emsp;&emsp;**Maximum:** assume the first element is the largest, then compare it with every other element and replace it whenever a larger one is found.<br>

## Key Features (New in This Program)
&emsp;&emsp;**Array**: a group of elements of the same type stored one after another in memory. `int arr[5];` holds 5 integers.<br>
&emsp;&emsp;**Array index**: elements are accessed as `arr[i]`. Counting starts from 0, so the valid indexes are `0` to `4`.<br>
&emsp;&emsp;**Reading into an array with a loop**: `scanf("%d", &arr[i]);` inside a `for` loop stores each input in the next position.<br>
&emsp;&emsp;**Using an array element in a calculation**: `sum = sum + arr[i];` adds the stored value to the running total, while the value is being read.<br>
&emsp;&emsp;**Printing an array with a loop**: one `printf()` inside a `for` loop prints every element.<br>
&emsp;&emsp;**`%-4d` (width and left alignment)**: prints an integer in a field at least 4 characters wide, aligned to the **left**. The minus sign means left alignment. The numbers line up in columns.<br>
&emsp;&emsp;**Finding the maximum**: `max = arr[0];` starts from an element of the array, then a loop from index 1 updates `max` with `if (max < arr[i])`.<br>
&emsp;&emsp;**`sum / 5.0` for the average**: the decimal `5.0` forces floating-point division, so the fraction is kept.<br>

## Concepts Reused From Earlier Programs
&emsp;&emsp;**`for` loop, accumulator (`sum`) and `if`**, used as in the factorial and smallest-number programs.<br>
&emsp;&emsp;**`float` and `%.2f`**, used as in the area programs.<br>
&emsp;&emsp;**Loop-scoped counter** (`for (int i = 0; ...)`), used as in the factorial series program.<br>

## Sample Input / Output
**Run 1**
```text
Please enter 5 integers: 4 9 2 7 5
The numbers are: 4   9   2   7   5   
Sum of those numbers is: 27
Average of those numbers is: 5.40
Maximum number among them is: 9
```

**Run 2: Zero and negative number**
```text
Please enter 5 integers: -3 10 0 25 8
The numbers are: -3  10  0   25  8   
Sum of those numbers is: 40
Average of those numbers is: 8.00
Maximum number among them is: 25
```

**Run 3: All numbers negative**
```text
Please enter 5 integers: -5 -2 -9 -1 -7
The numbers are: -5  -2  -9  -1  -7  
Sum of those numbers is: -24
Average of those numbers is: -4.80
Maximum number among them is: -1
```

&emsp;&emsp;Note: each number is padded with spaces to 4 characters, so each "The numbers are" line ends with spaces.<br>

## How to Compile and Run
```bash
gcc Array-Sum-Avg-Max.c -o arraystats
./arraystats
```

## Files
- `Array-Sum-Avg-Max.c`: reads 5 integers and prints the numbers, sum, average and maximum