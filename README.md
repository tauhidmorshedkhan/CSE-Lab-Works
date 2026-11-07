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
| 2026-06-30 | 01 | Print Name, Roll and Favorite Subject | [Multiple printf](/2026-06-30/01-Newline-Escape-Sequence/Newline-Multiple-Printf.c)<br>[Single printf](/2026-06-30/01-Newline-Escape-Sequence/Newline-Single-Printf.c) | ✅ | ⬜ | ⬜ |
| 2026-06-30 | 02 | [Tab Escape Sequence](/2026-06-30/02-Tab-Escape-Sequence/Tab-Escape-Sequence.c) | - | ✅ | ⬜ | ⬜ |
| 2026-08-11 | 03 | [Area and Perimeter of a Circle](/2026-08-11/03-Area-and-Perimeter-of-the-Circle/Area-and-Perimeter-of-the-Circle.c) | - | ✅ | ⬜ | ⬜ |
| 2026-08-11 | 04 | [Area and Perimeter of a Rectangle](/2026-08-11/04-Area-and-Perimeter-of-the-Rectangle/Area-and-Perimeter-of-the-Rectangle.c) | - | ✅ | ⬜ | ⬜ |
| 2026-09-02 | 05 | [Check Even or Odd](/2026-09-02/05-Check-Even-Or-Odd/Check-Even-Or-Odd.c) | - | ✅ | ⬜ | ⬜ |
| 2026-09-07 | 06 | [Temperature Conversion (Celsius and Fahrenheit)](/2026-09-07/06-Convert-Temperature-Celsius-Fahrenheit/Convert-Temperature-Celsius-Fahrenheit.c) | - | ✅ | ⬜ | ⬜ |
| 2026-09-14 | 07 | [Roots of a Quadratic Equation](/2026-09-14/07-Find-Roots-Of-Quadratic-Equation/Find-Roots-Of-Quadratic-Equation.c) | - | ✅ | ⬜ | ⬜ |
| 2026-09-14 | 08 | Factorial of a Number | [Decrementing loop](/2026-09-14/08-Find-Factorial-Of-A-Number/Find-Factorial-Of-A-Number-Using-Decrementing-Loop.c)<br>[Incrementing loop](/2026-09-14/08-Find-Factorial-Of-A-Number/Find-Factorial-Of-A-Number-Using-Incrementing-Loop.c) | ✅ | ⬜ | ⬜ |
| 2026-09-29 | 09 | [Factorial Series Sum](/2026-09-29/09-Factorial-Series-Sum/Factorial-Series-Sum.c) | - | ✅ | ⬜ | ⬜ |
| 2026-09-29 | 10 | [Fibonacci Series](/2026-09-29/10-Fibonacci-Series/Fibonacci-Series.c) | - | ✅ | ⬜ | ⬜ |
| 2026-10-27 | 11 | Smallest of Three Numbers | [Multiple printf](2026-10-27/11-Find-Smallest-Among-Three-Numbers/Smallest-Number-Multiple-Printf.c)<br>[Single printf](/2026-10-27/11-Find-Smallest-Among-Three-Numbers/Smallest-Number-Single-Printf.c) | ✅ | ⬜ | ⬜ |
| 2026-11-01 | 12 | Toggle the Case of a Letter | [Assign](2026-11-01/12-Toggle-Case/Toggle-Case-Assign.c)<br>[Direct](2026-11-01/12-Toggle-Case/Toggle-Case-Direct.c) | ✅ | ⬜ | ⬜ |
| 2026-11-01 | 13 | [Array: Sum, Average and Maximum](/2026-11-01/13-Array-Sum-Avg-Max/Array-Sum-Avg-Max.c) | - | ✅ | ⬜ | ⬜ |
| 2026-11-03 | 14 | [Total Price Using Arrays](/2026-11-03/14-Total-Price-Using-Arrays/Total-Price-Using-Arrays.c) | - | ✅ | ⬜ | ⬜ |
| 2026-11-03 | 15 | Linear Search in an Array | [All matches](/2026-11-03/15-Linear-Search/Linear-Search-All-Matches.c)<br>[First match](/2026-11-03/15-Linear-Search/Linear-Search-First-Match.c) | ✅ | ⬜ | ⬜ |

## Extra Programs (Not Yet Done in the Lab)

| # | Program | Method | C | C++ | Python |
|---|---------|--------|---|-----|--------|
| 01 | [Bubble Sort](/Other/Bubble-Sort/Bubble-Sort.c) | - | ✅ | ⬜ | ⬜ |

## How to Compile (C)

```bash
gcc <file-name>.c -o <output-name>
./<output-name>
```

- For programs that use `<math.h>` (Program 07), add `-lm` at the end of the command.
- On Windows (Command Prompt), run the output with `<output-name>.exe`. In PowerShell, use `.\<output-name>.exe`.
