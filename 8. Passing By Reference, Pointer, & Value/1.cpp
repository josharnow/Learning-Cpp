#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// Everything passed into a function is passed by value by default, except for an array, which decays to a pointer

void swap_pass_by_value(int a, int b) // Passes in by value
{
    int temp = a;
    a = b;
    b = temp;

    cout << "a: " << a << "\tb: " << b << '\n';
}

void swap_pass_by_reference(int &a, int &b) // Passes in by reference
{
    int temp = a;
    a = b;
    b = temp;

    cout << "a: " << a << "\tb: " << b << '\n';
}

int main()
{
    int a = 10;
    int b = 20;
    swap_pass_by_value(a, b);
    cout << "a: " << a << "\tb: " << b << '\n'; // Changes made to argument do not persist outside of the function (due to passing by value)
    swap_pass_by_reference(a, b);
    cout << "a: " << a << "\tb: " << b << '\n'; // Changes made to argument persist outside of the function (due to passing by reference)

    return 0;
}