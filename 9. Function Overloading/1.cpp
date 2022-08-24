#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::string;
using std::vector;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "a: " << a << "\tb: " << b << '\n';
}

void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;

    cout << "a: " << a << "\tb: " << b << '\n';
}

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    cout << "a: " << a << "\tb: " << b << '\n'; // Changes made to argument do not persist outside of the function (due to passing by value)

    string c = "String c";
    string d = "String d";

    swap(c, d);
    cout << "c: " << c << "\td: " << d << '\n'; // Changes made to argument persist outside of the function (due to passing by reference)

    return 0;
}