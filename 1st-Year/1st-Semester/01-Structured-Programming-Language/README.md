# CSE SPL Lab Programs

Structured Programming Language (SPL) Lab programs for the Department of Computer Science and Engineering (CSE), Institute of Science and Technology, Dhanmondi, which is affiliated with the National University of Bangladesh.

## Structure

- Programs are grouped by lab date: `YYYY-MM-DD/NN-Program-Name/`
- Each program folder contains the source file(s) and a `README.md` with the program's key features.
- If a program has two solutions, each method is a separate file in the same folder.
- Extra programs that were not part of the lab are in the `Other/` folder.

**Status:** ✅ = done, ⬜ = not done yet

## Lab Programs

| Date | # | Program | Method | C | C++ | Python |
|------|---|---------|--------|---|-----|--------|
| 2026-06-30 | 01 | [Print Name, Roll and Favorite Subject](2026-06-30/01-Newline-Escape-Sequence) | Multiple printf<br>Single printf | ✅ | ⬜ | ⬜ |
| 2026-06-30 | 02 | [Tab Escape Sequence](2026-06-30/02-Tab-Escape-Sequence) | - | ✅ | ⬜ | ⬜ |
| 2026-08-11 | 03 | [Area and Perimeter of a Circle](2026-08-11/03-Area-and-Perimeter-of-the-Circle) | - | ✅ | ⬜ | ⬜ |
| 2026-08-11 | 04 | [Area and Perimeter of a Rectangle](2026-08-11/04-Area-and-Perimeter-of-the-Rectangle) | - | ✅ | ⬜ | ⬜ |
| 2026-09-02 | 05 | [Check Even or Odd](2026-09-02/05-Check-Even-Or-Odd) | - | ✅ | ⬜ | ⬜ |
| 2026-09-07 | 06 | [Temperature Conversion (Celsius and Fahrenheit)](2026-09-07/06-Convert-Temperature-Celsius-Fahrenheit) | - | ✅ | ⬜ | ⬜ |
| 2026-09-14 | 07 | [Roots of a Quadratic Equation](2026-09-14/07-Find-Roots-Of-Quadratic-Equation) | - | ✅ | ⬜ | ⬜ |
| 2026-09-14 | 08 | Factorial of a Number | [Decrementing loop](2026-09-14/08-Find-Factorial-Of-A-Number)<br>[Incrementing loop](2026-09-14/08-Find-Factorial-Of-A-Number) | ✅ | ⬜ | ⬜ |
| 2026-09-29 | 09 | [Factorial Series Sum](2026-09-29/09-Factorial-Series-Sum) | - | ✅ | ⬜ | ⬜ |
| 2026-09-29 | 10 | [Fibonacci Series](2026-09-29/10-Fibonacci-Series) | - | ✅ | ⬜ | ⬜ |
| 2026-10-27 | 11 | [Smallest of Three Numbers](2026-10-27/11-Find-Smallest-Among-Three-Numbers) | Multiple printf<br>Single printf | ✅ | ⬜ | ⬜ |
| 2026-11-01 | 12 | [Toggle the Case of a Letter](2026-11-01/12-Toggle-Case) | Assign<br>Direct | ✅ | ⬜ | ⬜ |
| 2026-11-01 | 13 | [Array: Sum, Average and Maximum](2026-11-01/13-Array-Sum-Avg-Max) | - | ✅ | ⬜ | ⬜ |
| 2026-11-03 | 14 | [Total Price Using Arrays](2026-11-03/14-Total-Price-Using-Arrays) | - | ✅ | ⬜ | ⬜ |
| 2026-11-03 | 15 | [Linear Search in an Array](2026-11-03/15-Linear-Search) | All matches<br>First match | ✅ | ⬜ | ⬜ |
| 2026-11-11 | 16 | [Bubble Sort (Ascending Order)](2026-11-11/16-Bubble-Sort-Ascending-Order) | - | ✅ | ⬜ | ⬜ |
| 2026-11-11 | 17 | [Full Name Concatenation](2026-11-11/17-Full-Name-Concatenation/17-Full-Name-Concatenation.c) | - | ✅ | ⬜ | ⬜ |
| 2026-11-11 | 18 | [Bubble Sort with User Selected Order](2026-11-11/18-Bubble-Sort-With-User-Choice) | - | ✅ | ⬜ | ⬜ |
| 2026-11-17 | 19 | [Reverse Digits and Sum of Digits](2026-11-17/19-Reverse-Digits-And-Sum-Of-Digits) | - | ✅ | ⬜ | ⬜ |
| 2026-11-17 | 20 | [GCD Using Euclidean Algorithm](2026-11-17/20-GCD-Using-Euclidean-Algorithm) | Euclidean | ✅ | ⬜ | ⬜ |

## Extra Programs (Not Yet Done in the Lab)

| # | Program | Method | C | C++ | Python |
|---|---------|--------|---|-----|--------|
| 01 | [Largest of Three Numbers](Other/01-Find-Largest-Among-Three-Numbers) | Multiple printf<br>Single printf | ✅ | ⬜ | ⬜ |
| 02 | [Leap Year Check](Other/02-Leap-Year-Check) | - | ✅ | ⬜ | ⬜ |

## How to Compile (C)

```bash
gcc <file-name>.c -o <output-name>
./<output-name>
```

- For programs that use `<math.h>` (Program 07), add `-lm` at the end of the command.
- On Windows (Command Prompt), run the output with `<output-name>.exe`. In PowerShell, use `.\<output-name>.exe`.
