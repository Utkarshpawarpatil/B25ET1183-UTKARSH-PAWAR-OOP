
#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    int empId;
    string name;

public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Employee Name: ";
        cin >> name;
    }

    void displayEmployee()
    {
        cout << "\nEmployee ID: " << empId;
        cout << "\nEmployee Name: " << name;
    }
};

class Shift
{
protected:
    float hours[7];

public:
    void getShift()
    {
        cout << "\nEnter working hours for 7 days:\n";

        for (int i = 0; i < 7; i++)
        {
            cout << "Day " << i + 1 << ": ";
            cin >> hours[i];
        }
    }
};

class EmployeeWork : public Employee, public Shift
{
public:
    void calculate()
    {
        float total = 0;

        for (int i = 0; i < 7; i++)
        {
            total += hours[i];
        }

        displayEmployee();

        cout << "\nTotal Working Hours = " << total << " hours";
    }
};

int main()
{
    EmployeeWork obj;

    obj.getEmployee();
    obj.getShift();
    obj.calculate();

    return 0;
}
