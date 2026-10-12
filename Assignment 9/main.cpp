#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    virtual double calculatePay() {
        return 0;
    }
};

// Derived class: Permanent Employee
class PermanentEmployee : public Employee {
private:
    double basicSalary, bonus;

public:
    PermanentEmployee(double salary, double b) {
        basicSalary = salary;
        bonus = b;
    }

    double calculatePay() override {
        return basicSalary + bonus;
    }
};

// Derived class: Contract Employee
class ContractEmployee : public Employee {
private:
    int hoursWorked;
    double hourlyRate;

public:
    ContractEmployee(int hours, double rate) {
        hoursWorked = hours;
        hourlyRate = rate;
    }

    double calculatePay() override {
        return hoursWorked * hourlyRate;
    }
};

int main() {
    PermanentEmployee p(30000, 5000);
    ContractEmployee c(100, 200);

    // Base class pointers
    Employee* e1 = &p;
    Employee* e2 = &c;

    // Run-time polymorphism
    cout << "Permanent Employee Pay: Rs. "
         << e1->calculatePay() << endl;

    cout << "Contract Employee Pay: Rs. "
         << e2->calculatePay() << endl;

    return 0;
}
