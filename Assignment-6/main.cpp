Overloading the << operator to display a complex number in the form a+bi.
Code :-
#include <iostream>
using namespace std;

// Class to represent a complex number
class Complex
{
    int a, b;  // a = real part, b = imaginary part
public:
    // Function to accept real and imaginary parts
    void input()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> a >> b;
    }
    // Overloading the << insertion operator to display a complex number
    friend ostream& operator<<(ostream& out, const Complex& c)
    {
        out << c.a;  // Display the real part
        // Display '+' if the imaginary part is non-negative
        if (c.b >= 0)
            out << "+" << c.b << "i";
        else
            out << c.b << "i";  // Negative value already contains '-'
        return out;  // Return output stream to support chaining
    }
};
int main()
{
    Complex c;  // Create an object of Complex class
    c.input();  // Accept the complex number from the user
    // Display the complex number using the overloaded << operator
    cout << "Complex number = " << c;
    return 0;  // End the program
}
