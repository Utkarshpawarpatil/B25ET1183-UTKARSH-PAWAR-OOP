#include <iostream>
using namespace std;

float convert(float meters)
{
    return meters * 100;
}

float convert(double kilometers)
{
    return kilometers * 1000;
}

int main()
{
    float meters;
    double kilometers;

    cout << "Enter distance in meters: ";
    cin >> meters;

    cout << "Meters to centimeters = "
         << convert(meters) << " cm" << endl;

    cout << "\nEnter distance in kilometers: ";
    cin >> kilometers;

    cout << "Kilometers to meters = "
         << convert(kilometers) << " m" << endl;

    return 0;
}
