// 3. Main file (analogous to function calling) [.cpp file]
#include <iostream>
#include "math_utils.h" // Using double quotes will search for the file in the current directory
using std::cout;
using std::string;

int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;

    cout << utilz::area(rectangle.length, rectangle.width) << '\n'; // Passing in two int
    cout << utilz::area(rectangle.length) << '\n';                  // Passing in one int
    cout << utilz::area(rectangle) << '\n';                         // Passing in one Rectangle object

    cout << utilz::pow(3, 3) << '\n';
    cout << utilz::pow(3) << '\n';

    return 0;
}

// To compile: g++ math_stuff.cpp math_utils.cpp
// Can also compile to .o intermediary files (object code) using: g++ -c math_stuff.cpp math_utils.cpp
    // You might want to compile to .o files if you're redistributing the files but want the source code to remain secret
    // One use case: distributing a library