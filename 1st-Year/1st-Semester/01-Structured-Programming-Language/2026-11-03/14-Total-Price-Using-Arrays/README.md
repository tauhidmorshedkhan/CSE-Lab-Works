# 14 – Total Price Using Arrays

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that stores the prices of 5 items in one array and their quantities in another array, and calculates the total price of all the items.

## Data Used

| Item | Price | Quantity | Cost (Price × Quantity) |
|---|---|---|---|
| 1 | 17 | 3 | 51 |
| 2 | 23 | 6 | 138 |
| 3 | 56 | 2 | 112 |
| 4 | 67 | 10 | 670 |
| 5 | 39 | 13 | 507 |

## Formula Used
&emsp;&emsp;**Total price** = Σ (price[i] × quantity[i]), for i = 0 to 4<br>
&emsp;&emsp;Total = 51 + 138 + 112 + 670 + 507 = 1478<br>

## Key Features (New in This Program)
&emsp;&emsp;**Array initialization**: `int price[5] = {17, 23, 56, 67, 39};` declares the array and gives each element its value in one statement. The values are written inside curly braces, separated by commas.<br>
&emsp;&emsp;**Parallel arrays**: two arrays whose elements at the same index belong together. `price[i]` and `quantity[i]` describe the same item.<br>
&emsp;&emsp;**`+=` (compound assignment operator)**: `total += x;` means `total = total + x;`. It adds a value to a variable in a short form.<br>
&emsp;&emsp;**Using two arrays in one expression**: `price[i] * quantity[i]` multiplies the matching elements of both arrays.<br>
&emsp;&emsp;**Fixed data in the program**: the values are stored in the code, so no `scanf()` is needed and the output is always the same.<br>

## Concepts Reused From Earlier Programs
&emsp;&emsp;**Array declaration, indexing and looping through an array** (from Program 12).<br>
&emsp;&emsp;**Accumulator pattern**: a variable that starts at 0 and collects a running total (Programs 08, 09 and 12).<br>
&emsp;&emsp;**`for (int i = 0; ...)` with a loop-scoped counter** (Programs 09 and 12).<br>
&emsp;&emsp;**`%d` and `printf()`** for printing an integer (Program 05).<br>

## Sample Output
```text
Total price is: 1478
```

## How to Compile and Run
```bash
gcc Total-Price-Using-Arrays.c -o totalprice
./totalprice
```

## Files
- `Total-Price-Using-Arrays.c`: calculates the total price from a price array and a quantity array