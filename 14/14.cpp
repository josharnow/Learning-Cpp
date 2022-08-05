#include <iostream>
#include <cmath>
#include <string> // Gives access to C++ string class
using std::cout;
using std::string; // String is part of the standard namespace

int main()
{
    string greeting = "hello"; // Object instance of the string class
    cout << greeting << '\n';
    cout << greeting[0] << greeting[1] << greeting[2] << greeting[3] << greeting[4] << greeting[5] << '\n';

    cout << greeting + " there" << '\n';
    

    return 0;
}