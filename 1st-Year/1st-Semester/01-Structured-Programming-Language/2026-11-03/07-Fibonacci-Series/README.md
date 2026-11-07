# 10 – Fibonacci Series (First Two Terms Entered by the User)

**Language(s):** C

## Problem Statement
&emsp;&emsp;Write a C program that takes the number of terms `n` and the first two terms from the user, and prints the Fibonacci series up to `n` terms. If `n` is less than 1, print an error message and stop.

## Formula Used
&emsp;&emsp;**Next term** = previous term + the term before it<br>
&emsp;&emsp;F(k) = F(k − 1) + F(k − 2)<br>
&emsp;&emsp;Example with first terms 0 and 1: 0, 1, 1, 2, 3, 5, 8, ...<br>

## Cases Handled
&emsp;&emsp;**`n < 1`**: error message and exit.<br>
&emsp;&emsp;**`n = 1`**: reads and prints only the first term.<br>
&emsp;&emsp;**`n ≥ 2`**: reads the first two terms, prints them, then generates the remaining terms with a loop.<br>

## Key Features (New in This Program)
&emsp;&emsp;**`long long`**: an integer type with a larger range than `int` (usually 8 bytes). It is used because Fibonacci numbers grow quickly.<br>
&emsp;&emsp;**`%lld`**: format specifier for `long long` in `printf()` and `scanf()`.<br>
&emsp;&emsp;**`if - else if - else` ladder**: chooses one of three paths (`n < 1`, `n == 1`, and `n ≥ 2`).<br>
&emsp;&emsp;**Loop starting at 3**: `for (int i = 3; i <= n; i++)` starts from the third term, because the first two terms are already printed.<br>
&emsp;&emsp;**Sliding-window update**: `a = b; b = c;` moves the two stored terms forward, so the next iteration uses the two latest terms.<br>
&emsp;&emsp;**Printing inside the loop**: `printf(" %lld", c);` prints each new term as soon as it is calculated. The leading space separates the terms.<br>
&emsp;&emsp;**Final `printf("\n");`**: one newline after the loop ends the output line.<br>
&emsp;&emsp;**Early exit with `return 1;`**: exits with an error status for invalid input.<br>
&emsp;&emsp;**Loop-scoped variable**: `int i` is declared inside the `for` header.<br>

## Sample Input / Output
**Run 1: Classic series**
```text
Enter number of terms: 7
Enter first term: 0
Enter second term: 1
Fibonacci Series is: 0 1 1 2 3 5 8
```

**Run 2: Custom first terms**
```text
Enter number of terms: 5
Enter first term: 2
Enter second term: 5
Fibonacci Series is: 2 5 7 12 19
```

**Run 3: One term**
```text
Enter number of terms: 1
Enter first term: 4
Fibonacci Series is: 4
```

**Run 4: Invalid input**
```text
Enter number of terms: 0
Invalid input: number of terms must be at least 1
```

## How to Compile and Run
```bash
gcc Fibonacci-Series.c -o fibonacci
./fibonacci
```

## Files
- `Fibonacci-Series.c`: prints the Fibonacci series of `n` terms from two user-given first terms