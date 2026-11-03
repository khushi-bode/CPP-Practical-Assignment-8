# C++ Practical Assignment 8 — Exception Handling

## Student / practical details
- **Practical number:** 8
- **Practical title:** Exception Handling
- **Student name in assignment PDF:** Heramb Yadav
- **PRN in assignment PDF:** 202501110029
- **Division / Batch / Roll No.:** A / A2 / 029
- **Date performed / submission in assignment PDF:** 25/10/2026
- **Faculty:** Mr. Khushal Khairnar

## Problem statement
Write a C++ program to demonstrate exception handling using `try`, `throw`, and `catch` statements to handle division-by-zero errors.

## Objectives
- Understand exception handling in C++.
- Implement `try`, `throw`, and `catch` statements.
- Handle division-by-zero errors.
- Understand how a program continues after an exception is handled.

## Theory
Exception handling is a mechanism in C++ used to handle runtime errors and prevent abnormal program termination.

- **try:** Contains code that may generate an exception.
- **throw:** Generates an exception when an error occurs.
- **catch:** Handles the exception thrown by the `try` block.

The program accepts two integers. If the second number is zero, it throws an exception and the `catch` block displays an error message. Otherwise, it displays the integer division result. After handling the exception, the program displays a message indicating that execution continues.

## Algorithm
1. Start.
2. Declare two integer variables `a` and `b`.
3. Accept two numbers from the user.
4. Enter the `try` block.
5. Check whether `b` is equal to zero.
6. If `b == 0`, throw an exception.
7. Otherwise, calculate and display `a / b`.
8. Catch the exception and display an error message.
9. Display a message indicating that the program continues.
10. Stop.

## Files
```text
.
├── main.cpp
├── README.md
├── output.txt
└── screenshots/
    ├── test-case-1.png
    ├── test-case-2.png
    └── test-case-3.png
```

## Requirements
- C++ compiler (GCC/G++, MinGW, or Dev-C++ compiler).
- C++11 or later.

## Compile and run

### Windows (MinGW / GCC)
```bash
g++ -std=c++11 -Wall -Wextra -pedantic main.cpp -o exception_handling.exe
exception_handling.exe
```

### Linux / macOS
```bash
g++ -std=c++11 -Wall -Wextra -pedantic main.cpp -o exception_handling
./exception_handling
```

You can also open `main.cpp` in Dev-C++ and select **Compile & Run**.

## Sample test cases and expected output

### Test case 1
Input:
```text
10 5
```
Output:
```text
Enter two numbers: Division = 2
Program continues after exception handling.
```

### Test case 2
Input:
```text
5 0
```
Output:
```text
Enter two numbers: Exception caught: Division by zero is not allowed.
Program continues after exception handling.
```

### Test case 3
Input:
```text
20 4
```
Output:
```text
Enter two numbers: Division = 5
Program continues after exception handling.
```

| Test case | Input (`a`, `b`) | Expected result | Status |
|---|---|---|---|
| 1 | 10, 5 | Division = 2 | Pass |
| 2 | 5, 0 | Exception caught: Division by zero is not allowed. | Pass |
| 3 | 20, 4 | Division = 5 | Pass |

## Result / observation
The program demonstrates exception handling in C++ using `try`, `throw`, and `catch`. When the divisor is zero, an exception is thrown and an appropriate error message is displayed. When the divisor is non-zero, the division result is displayed. After the exception is handled, the program continues and displays a confirmation message.

## Conclusion
This practical demonstrates exception handling in C++ and the use of `try`, `throw`, and `catch` statements. It handles division-by-zero errors and shows how a program can continue executing after an error is caught.

## Assignment questions

**Q1. What is exception handling in C++?**

Exception handling is a mechanism used to handle runtime errors in a program.

**Q2. What is the purpose of the try block?**

The `try` block contains code that may generate an exception.

**Q3. What is the purpose of the throw keyword?**

The `throw` keyword is used to generate an exception when an error occurs.
