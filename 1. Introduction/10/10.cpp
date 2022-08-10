#include <iostream>
using std::cout;

int main()
{
    // Bool is a 1 bit integral data type
    bool pizza_is_good = true; // Can also assign to 1
    cout << pizza_is_good << "\n";
    cout << std::boolalpha << pizza_is_good << "\n"; // boolalpha is a manipulator function used to show the input value as "true" or "false"
}