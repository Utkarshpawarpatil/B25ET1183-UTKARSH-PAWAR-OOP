```cpp
#include <iostream>  // Header file for input and output
using namespace std;

// Base class
class Employee {
public:
    // Virtual function to calculate employee pay
    virtual double calculatePay() {
        return 0;  // Default pay for a general employee
    }
};

// Derived class: Permanent Employee
class PermanentEmployee : public Employee {
private:
    double basicSalary, bonus;  // Stores salary and bonus

public:
    // Parameterized constructor to initialize salary and bonus
    PermanentEmployee(double salary, double b) {
        basicSalary = salary;
        bonus = b;
    }

    // Override the base class function to calculate permanent employee pay
    double calculatePay() override {
        return basicSalary + bonus;  // Salary + bonus
    }
};

// Derived class: Contract Employee
class ContractEmployee : public Employee {
private:
    int hoursWorked;       // Stores total hours worked
    double hourlyRate;     // Stores payment per hour

public:
    // Parameterized constructor to initialize hours and hourly rate
    ContractEmployee(int hours, double rate) {
        hoursWorked = hours;
        hourlyRate = rate;
    }

    // Override the base class function to calculate contract employee pay
    double calculatePay() override {
        return hoursWorked * hourlyRate;  // Hours worked × hourly rate
    }
};

int main() {
    // Create a permanent employee object with salary and bonus
    PermanentEmployee p(30000, 5000);

    // Create a contract employee object with hours and hourly rate
    ContractEmployee c(100, 200);

    // Base class pointers pointing to derived class objects
    Employee* e1 = &p;
    Employee* e2 = &c;

    // Run-time polymorphism:
    // The appropriate calculatePay() function is called at run time
    cout << "Permanent Employee Pay: Rs. "
         << e1->calculatePay() << endl;

    cout << "Contract Employee Pay: Rs. "
         << e2->calculatePay() << endl;

    return 0;  // End the program successfully
}
```
