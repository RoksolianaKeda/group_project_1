#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    while (true)
    {
        double num1, num2;
        int operation;

        // Display operation menu
        cout << "\nPlease enter your operation from the list below:\n";
        cout << "1: Sum\n2: Subtraction\n3: Multiplication\n4: Division\n5: Square Root\n6: EXIT\n-> ";

        // Validate operation input
        while (!(cin >> operation) || (operation < 1 || operation > 6))
        {
            cout << "Invalid input. Please enter a number between 1 and 6: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // Exit if user chooses 6
        if (operation == 6)
        {
            return 0;
        }

        // Get and validate the first number
        cout << "\nPlease enter the first number.\n-> ";
        while (!(cin >> num1))
        {
            cout << "Invalid input. Please enter a valid number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // Square root operation
        if (operation == 5)
        {
            // Validate for negative numbers
            if (num1 < 0)
            {
                cout << "\nSquare root of a negative number is not allowed.\n";
            }
            else
            {
                cout << "\nResult: " << sqrt(num1) << endl;
            }
        }
        else
        {
            // Get and validate the second number for other operations
            cout << "\nPlease enter the second number.\n ";
            while (!(cin >> num2))
            {
                cout << "Invalid input. Please enter a valid number: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            // Perform operation
            switch (operation)
            {
            case 1:
                cout << "\nResult: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "\nResult: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "\nResult: " << num1 * num2 << endl;
                break;
            case 4:
                // Check for division by zero
                if (num2 == 0)
                {
                    cout << "\nDivision by zero is not allowed.\n";
                }
                else
                {
                    cout << "\nResult: " << num1 / num2 << endl;
                }
                break;
            default:
                cout << "\nInvalid operation.\n";
                break;
            }
        }
    }
}
