#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main()
{
    int number = 30; // Decimal (base 10) [0 * 1 + 3 * 10 = 30]
    cout << number << "\n";

    number = 0x30; // Hexadecimal (base 16) [0 * 1 + 3 * 16 = 48]
    cout << number << "\n";

    number = 030; // Octal (base 8) [0 * 1 + 3 * 8 = 24]
    cout << number << "\n";

    number = 30;
    cout << std::hex << number << "\n"; // Prefixing the number with the hex manipulator converts the number to hexadecimal representation
    cout << std::oct << number << "\n"; // Prefixing the number with the oct manipulator converts the number to octal representation
    cout << std::dec << number << "\n"; // Prefixing the number with the dec manipulator converts the number to decimal representation

        return 0;
}