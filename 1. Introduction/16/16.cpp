#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main()
{
    string greeting = "Hello";
    cout << "Greeting size: " << greeting.size() << "\n"; // size() method does same thing as length() method
    greeting.append(" there!"); // append() method does same thing as += to append to a string
    
    greeting.insert(11, ", buddy"); // Inserts the specified string at the specified index
    cout << greeting << "\n";

    greeting.erase(11, 7); // Arguments: index position, # char to remove
    cout << greeting << "\n";
    greeting.erase(5); // Arguments: index position
    cout << greeting << "\n";
    greeting.pop_back(); // Removes last character in string
    cout << greeting << "\n";
    greeting.replace(0, 4, "Heaven"); // Arguments: starting index, length (of characters to delete)
    cout << greeting << "\n";

    return 0;
}