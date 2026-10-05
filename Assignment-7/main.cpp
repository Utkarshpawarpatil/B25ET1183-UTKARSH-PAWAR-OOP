Implementation of a String class with dynamic character array allocation in the constructor and deallocation in the destructor in C++
Code :-

#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char *str;  // Pointer to character array
public:
    // Constructor: dynamically allocates memory
    String(const char *s)
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    // Destructor: deallocates memory
    ~String()
    {
        delete[] str;
    }
    // Function to display the string
    void display()
    {
        cout << str;
    }
};
int main()
{
    String s("Object Oriented Programming");
    s.display();
    return 0;
}
