```cpp
#include <iostream>  // Header file for input and output
using namespace std;

// Class to represent a complex number
class Complex
{
    int real;  // Stores the real part
    int imag;  // Stores the imaginary part

public:
    // Function to read the complex number from the user
    void read()
    {
        cout << "Enter real part: ";
        cin >> real;  // Accept the real part

        cout << "Enter imaginary part: ";
        cin >> imag;  // Accept the imaginary part
    }

    // Overloading the + operator to add an integer
    // to the real part of a complex number
    Complex operator+(int n)
    {
        Complex temp;       // Create a temporary object

        temp.real = real + n;  // Add integer to the real part
        temp.imag = imag;      // Keep the imaginary part unchanged

        return temp;  // Return the resulting complex number
    }

    // Function to display the complex number
    void display()
    {
        cout << "Result = " << real << " + "
             << imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2;  // Create two Complex objects
    int n;           // Variable to store an integer

    c1.read();  // Read the first complex number

    cout << "Enter integer value: ";
    cin >> n;  // Accept the integer from the user

    c2 = c1 + n;  // Call the overloaded + operator

    c2.display();  // Display the resulting complex number

    return 0;  // End the program successfully
}
```
