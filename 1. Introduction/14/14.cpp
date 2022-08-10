#include <iostream>
#include <cmath>
#include <string> // Gives access to C++ string class
using std::cout;
using std::string; // String is part of the standard namespace

int main()
{
    string greeting = "Hello"; // Object instance of the string class
    string complete_greeting = greeting + " there"; // Object instance of the string class
    cout << greeting << '\n';
    cout << greeting[0] << greeting[1] << greeting[2] << greeting[3] << greeting[4] << greeting[5] << '\n';

    complete_greeting += "!";

    cout << complete_greeting << '\n';
    cout << complete_greeting.length() << '\n';

    // C String
    char name[] = "Josh"; // string == array of characters. Here, there are 5 characters: "Josh\0". "\0" is the null terminator. The amount of memory this variable has is limited to 6 characters; it can't be assigned another value larger (or smaller) than that
    
    return 0;
}