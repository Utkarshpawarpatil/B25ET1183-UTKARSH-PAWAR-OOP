```cpp
#include <iostream>  // Header file for input and output
#include <cstring>   // Header file for strlen() and strcpy()
using namespace std;

// Class to demonstrate a copy constructor
class String
{
    char *str;  // Pointer to store the string dynamically

public:
    // Default constructor: allocates memory for 100 characters
    String()
    {
        str = new char[100];
    }

    // Copy constructor: creates a copy of an existing String object
    String(const String &s)
    {
        // Allocate memory according to the length of the source string
        str = new char[strlen(s.str) + 1];

        // Copy the source string into the new memory
        strcpy(str, s.str);
    }

    // Function to accept a string from the user
    void Accept()
    {
        cout << "Enter a string: ";
        cin.getline(str, 100);  // Read the entire line, including spaces
    }

    // Function to display the string
    void Display()
    {
        cout << "String = " << str << endl;
    }

    // Destructor: releases dynamically allocated memory
    ~String()
    {
        delete[] str;
    }
};

int main()
{
    String s1;  // Create the original String object

    s1.Accept();  // Accept a string from the user

    cout << "\nOriginal String:" << endl;
    s1.Display();  // Display the original string

    String s2(s1);  // Call the copy constructor to copy s1 into s2

    cout << "\nCopied String:" << endl;
    s2.Display();  // Display the copied string

    return 0;  // End the program successfully
}
```
