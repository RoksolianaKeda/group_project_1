# Simple Calculator Program

This is a simple console-based calculator application written in C++. It allows users to perform basic arithmetic operations and calculate square roots.

## Features

- Addition of two numbers
- Subtraction of two numbers
- Multiplication of two numbers
- Division of two numbers
- Square root calculation for a single number
- Input validation to ensure correct user input
- Option to exit the program

## Prerequisites

To compile and run this program, you need:

- A C++ compiler (such as `g++` or `clang`)
- A terminal or command prompt

## How to Compile

1. Save the program file with a `.cpp` extension (e.g., `calculator.cpp`).
2. Open your terminal or command prompt.
3. Navigate to the directory containing `calculator.cpp`.
4. Run the following command to compile the program:
   ```bash
   g++ calculator.cpp -o calculator
   ```
5. If the compilation is successful, an executable file named `calculator` (or `calculator.exe` on Windows) will be created.

## How to Run

1. In the same terminal or command prompt, run the compiled executable:
   ```bash
   ./calculator   # On Unix-based systems (Linux, macOS)
   calculator.exe # On Windows
   ```
2. Follow the on-screen instructions to perform calculations.

## User Guide

- After running the program, you will be presented with a menu of operations.
- Enter a number corresponding to the desired operation:
  1. Sum
  2. Subtraction
  3. Multiplication
  4. Division
  5. Square Root
  6. EXIT
- If you select an operation other than square root, you will be prompted to enter two numbers.
- For the square root operation, you will only need to enter one number.
- The program will display the result or an appropriate error message (e.g., division by zero or negative square root).

## Input Validation

- The program handles invalid input for both operations and numbers.
- If an invalid input is detected, the program will prompt the user to re-enter a valid input.

## Example Session

```
Please choose an operation:
1: Sum
2: Subtraction
3: Multiplication
4: Division
5: Square Root
6: EXIT
-> 1

Enter the first number:
-> 5

Enter the second number:
-> 3

Result: 8
```

## Exit

To exit the program, select option `6` from the main menu.

## Notes

- Ensure proper input when entering numbers and operations.
- Avoid entering extremely large numbers to prevent overflow errors.

## Enjoy your use!
