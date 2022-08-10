#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main()
{
    string greeting = "What the hell?";
    greeting.replace(greeting.find("hell"), 4, "****");
    cout << greeting << "\n";

    greeting = "What is up?";
    cout << greeting.substr(5, 2) << "\n"; // Arguments: Starting index, # of char. This can be used to extract part of a string
    cout << greeting.find_first_of("aeiou") << "\n"; // Returns the index position of firs char it finds in string you invoke the method on
    cout << greeting.find_first_of("!") << "\n"; // Returns a very long number which is equivalent to npos. Npos is equal to -1; but because the method is returning a negative index for an unsigned long variable. Npos is used for testing
    unsigned long x = -1;
    cout << x << "\n";

    if(greeting.find_first_of("!") == -1) cout << "NOT FOUND!" << "\n"; // Example of how npos can be used

    if(greeting == "What is up?") cout << "Equals" << "\n"; // Prefered way to compare values is with == operator
    if (greeting.compare("What is up?") == 0)
        cout << "Equals"
             << "\n"; // Alternative way to compare values is with the compare() method

    return 0;
}