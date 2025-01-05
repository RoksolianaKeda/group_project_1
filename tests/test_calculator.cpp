#include "calculator.h"
#include <cassert>
#include <iostream>

void testAdd() {
    assert(add(3, 2) == 5);
    assert(add(-1, 1) == 0);
    std::cout << "Add tests passed!" << std::endl;
}

void testSubtract() {
    assert(subtract(5, 3) == 2);
    assert(subtract(3, 5) == -2);
    std::cout << "Subtract tests passed!" << std::endl;
}

void testMultiply() {
    assert(multiply(3, 2) == 6);
    assert(multiply(0, 5) == 0);
    std::cout << "Multiply tests passed!" << std::endl;
}

void testDivide() {
    assert(divide(6, 2) == 3);
    try {
        divide(6, 0); 
        assert(false);
    }
    catch (const std::invalid_argument& e) {
      
    }
    std::cout << "Divide tests passed!" << std::endl;
}

void testSquareRoot() {
    assert(squareRoot(4) == 2);
    try {
        squareRoot(-4);
        assert(false); 
    }
    catch (const std::invalid_argument& e) {
    }
    std::cout << "SquareRoot tests passed!" << std::endl;
}

void runTests() {
    testAdd();
    testSubtract();
    testMultiply();
    testDivide();
    testSquareRoot();
    std::cout << "All tests passed!" << std::endl;
}
