#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    double a, b;
    char op;

    // Input two numbers from the user
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Input the arithmetic operator
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    try
    {
        // Outer try block

        try
        {
            // Inner try block
            // Perform the operation based on the operator

            switch (op)
            {
                case '+':
                    cout << "Result = " << a + b << endl;
                    break;

                case '-':
                    cout << "Result = " << a - b << endl;
                    break;

                case '*':
                    cout << "Result = " << a * b << endl;
                    break;

                case '/':
                    // Check for division by zero
                    if (b == 0)
                    {
                        throw runtime_error("Division by zero!");
                    }

                    cout << "Result = " << a / b << endl;
                    break;

                default:
                    // Throw an exception for an invalid operator
                    throw invalid_argument("Invalid operator!");
            }
        }
        // Inner catch handles division-by-zero errors
        catch (const runtime_error& e)
        {
            cout << "Inner catch: " << e.what() << endl;
        }
    }
    // Outer catch handles exceptions not caught by the inner catch
    catch (const exception& e)
    {
        cout << "Outer catch: " << e.what() << endl;
    }

    // End of program
    return 0;
}
