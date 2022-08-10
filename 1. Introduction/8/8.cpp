#include <iostream>
#include <climits>
using std::cout;

int main()
{
    // Integral data types
    char x = 'A'; // 8 bits (1 byte)- MUST use single quotes for char literals bc double quotes are reserved for strings
    short a; // 16 bits (2 bytes)
    int b; // 32 bits (4 bytes)
    long c; // At least 32 bits, up to 64 bits depending on the platform (4-8 bytes)
    long long d;
    unsigned char xy;
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    // Bool is also an integral type (1 bit)

    cout << "Size of char (in bytes): " << sizeof(char) << "\n";
    cout << "Size of short (in bytes): " << sizeof(short) << "\n";
    cout << "Size of int (in bytes): " << sizeof(int) << "\n";
    cout << "Size of long (in bytes): " << sizeof(long) << "\n";
    cout << "Size of long long (in bytes): " << sizeof(long long) << "\n";

    // Below expressions display the bounds of each data type
    cout << "Character (signed): " << CHAR_MIN << " to " << CHAR_MAX << "\n";
    cout << "Character (unsigned): 0 to " << UCHAR_MAX << "\n";
    cout << "Short (signed): " << SHRT_MIN << " to " << SHRT_MAX << "\n";
    cout << "Short (unsigned): 0 to " << USHRT_MAX << "\n";
    cout << "Integer (signed): " << INT_MIN << " to " << INT_MAX << "\n";
    cout << "Integer (unsigned): 0 to " << UINT_MAX << "\n";
    cout << "Long (signed): " << LONG_MIN << " to " << LONG_MAX << "\n";
    cout << "Long (unsigned): 0 to " << ULONG_MAX << "\n";
    cout << "Long long (signed): " << LLONG_MIN << " to " << LLONG_MAX << "\n";
    cout << "Long long (unsigned): 0 to " << ULLONG_MAX << "\n";


    // Below is demonstrating how char is an integral data type; letters are associated with specific numbers based on the ASCII Table
    char w = 'a';
    char y = 'B';
    char z = 'b';
    cout << x << ": " << (int) x << "\n";
    char xx = 65; // Can store characters this way, too; it will map the variable to the character with a matching number on the ASCII table
    cout << xx << ": " << (int) xx << "\n";
    cout << w << ": " << (int) w << "\n";
    cout << y << ": " << (int) y << "\n";
    cout << z << ": " << (int) z << "\n";

    return 0;
}