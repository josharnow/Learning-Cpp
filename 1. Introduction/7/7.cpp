#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

double power(double base, int exponent) 
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

void print_pow(double base, int exponent)
{
    double myPower = power(base, exponent);
    cout << base << " raised to the " << exponent << " power is " << myPower << ".\n";
}

int main()
{
    double base;
    int exponent;
    cout << "What is the base?\n";
    cin >> base;
    cout << "What is the exponent?\n";
    cin >> exponent;
    print_pow(base, exponent);

    return 0;
}