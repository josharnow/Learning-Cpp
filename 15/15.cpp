#include <iostream>
#include <string> // Gives access to C++ string class
using std::cout;
using std::cin;
using std::string; // String is part of the standard namespace

int main()
{
    string greeting;
    cout << "Type a greeting:" << "\n";
    getline(std::cin, greeting); // This version of the getline() function is used to get user input for strings; just using cin alone will only process one word per cin call
    cout << "Your greeting: " + greeting << "\n";
    // cin.getline();  This version of the getline() function is used to get user input for numbers; just using cin alone will only process one word per cin call

    return 0;
}