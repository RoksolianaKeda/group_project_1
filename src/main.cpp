#include <iostream>
#include "calculator.h"

extern void runTests();

int main() {
    runTests();

    double num1, num2;
    int operation;

    std::cout << "\nPlease enter your operation from the list below:\n";
    std::cout << "1: Sum\n2: Subtraction\n3: Multiplication\n4: Division\n5: Square Root\n6: EXIT\n-> ";
    std::cin >> operation;
    if (operation == 6) return 0;

    std::cout << "\nPlease enter the first number.\n-> ";
    std::cin >> num1;

    if (operation == 5) {
        if (num1 < 0) {
            std::cout << "\nSquare root of a negative number is not allowed.\n";
        }
        else {
            std::cout << "\nResult: " << squareRoot(num1) << std::endl;
        }
    }
    else {
        std::cout << "\nPlease enter the second number.\n-> ";
        std::cin >> num2;

        switch (operation) {
        case 1: std::cout << "\nResult: " << add(num1, num2) << std::endl; break;
        case 2: std::cout << "\nResult: " << subtract(num1, num2) << std::endl; break;
        case 3: std::cout << "\nResult: " << multiply(num1, num2) << std::endl; break;
        case 4:
            if (num2 != 0) {
                std::cout << "\nResult: " << divide(num1, num2) << std::endl;
            }
            else {
                std::cout << "\nDivision by zero is not allowed.\n";
            }
            break;
        default: std::cout << "\nInvalid operation.\n"; break;
        }
    }
    return 0;
}


