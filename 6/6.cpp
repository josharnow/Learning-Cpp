#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

double power(double base, int exponent) // Function declaration: double power(double, int); | Function definition: double power(double base, int exponent){}
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int base, exponent;
    cout << "What is the base?\n";
    cin >> base;
    cout << "What is the exponent?\n";
    cin >> exponent;

    double myPower = power(base, exponent);
    cout << myPower << "\n";
    return 0;
}