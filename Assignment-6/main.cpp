#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    void read()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    Complex operator+(int n)
    {
        Complex temp;
        temp.real = real + n;
        temp.imag = imag;
        return temp;
    }

    void display()
    {
        cout << "Result = " << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2;
    int n;

    c1.read();

    cout << "Enter integer value: ";
    cin >> n;

    c2 = c1 + n;

    c2.display();

    return 0;
}
