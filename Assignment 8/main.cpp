```cpp
#include <iostream>  // Header file for input and output
#include <string>    // Header file for using string data type
using namespace std;

// Base class to store employee details
class Employee
{
protected:
    int empId;       // Stores employee ID
    string name;     // Stores employee name

public:
    // Function to accept employee details
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;  // Accept employee ID

        cout << "Enter Employee Name: ";
        cin >> name;   // Accept employee name
    }

    // Function to display employee details
    void displayEmployee()
    {
        cout << "\nEmployee ID: " << empId;
        cout << "\nEmployee Name: " << name;
    }
};

// Base class to store working hours
class Shift
{
protected:
    float hours[7];  // Array to store working hours for 7 days

public:
    // Function to accept working hours for each day
    void getShift()
    {
        cout << "\nEnter working hours for 7 days:\n";

        // Loop to input working hours for all 7 days
        for (int i = 0; i < 7; i++)
        {
            cout << "Day " << i + 1 << ": ";
            cin >> hours[i];  // Store hours for the current day
        }
    }
};

// Derived class inheriting from both Employee and Shift
// This demonstrates multiple inheritance
class EmployeeWork : public Employee, public Shift
{
public:
    // Function to calculate total working hours
    void calculate()
    {
        float total = 0;  // Initialize total working hours to zero

        // Add working hours of all 7 days
        for (int i = 0; i < 7; i++)
        {
            total += hours[i];
        }

        // Display employee details
        displayEmployee();

        // Display total working hours
        cout << "\nTotal Working Hours = "
             << total << " hours";
    }
};

int main()
{
    EmployeeWork obj;  // Create an object of the derived class

    obj.getEmployee();  // Accept employee details
    obj.getShift();     // Accept working hours for 7 days
    obj.calculate();    // Calculate and display total working hours

    return 0;  // End the program successfully
}
```
