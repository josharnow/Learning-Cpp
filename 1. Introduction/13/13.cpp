#include <iostream>
#include <cmath>
using std::cout;

int main()
{
    cout << sqrt(-25) << "\n"; // Returns a special value, nan (not a number)
    cout << NAN << "\n"; 

    cout << pow(9, 999) << "\n"; // Returns a special value, inf (infinity)
    cout << INFINITY << "\n";

    cout << pow(-9, 999) << "\n"; // Returns a special value, -inf (infinity)
    cout << -INFINITY << "\n";

    cout << remainder(10, 3) << "\n";
    cout << 10 % 3 << "\n";
    cout << remainder(10, 3.25) << "\n"; // Unlike the modulo operator, which can only return an int value, the remainder function can return floating point values


    cout << fmax(10, 3.25) << "\n"; // Returns max between two values given
    cout << fmin(10, 3.25) << "\n"; // Returns min between two values given
    cout << trunc(fmin(10, -3.25)) << "\n"; // Returns the value of fmin with the decimal portion truncated off
    cout << floor(fmin(10, -3.25)) << "\n"; // Returns the value of fmin with rounding towards the lower number
    cout << ceil(fmin(10, -3.25)) << "\n"; // Returns the value of fmin with rounding towards the higher number
    cout << round(fmin(10, -3.25)) << "\n"; // Returns the value of fmin with rounding towards whichever whole number is closest

    return 0;
}