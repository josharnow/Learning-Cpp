#include <iostream>
#include <float.h>
using std::cout;

int main()
{
    // Floating point data types
    float a = 10.0 / 3; // Must be a decimal on either operand in order for integer division not to be used
    a *= 1E10;
    double b = 7.7E4;
    long double c;

    cout << a << "\n";
    cout << std::fixed << a << "\n"; 
    cout << b << "\n";

    // Below shows how many significant digits each data type can be trusted to.
    // The greater the number, the higher the precision
    cout << "Floats are trustworthy out to " << FLT_DIG << " significant digits.\n";
    cout << "Doubles are trustworthy out to " << DBL_DIG << " significant digits.\n";
    cout << "Long doubles are trustworthy out to " << LDBL_DIG << " significant digits.\n";

    return 0;
}