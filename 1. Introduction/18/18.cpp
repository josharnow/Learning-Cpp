#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main()
{
    // Some types of constants
    // Quoted Constants
        // char - For characters
        // string - For strings
        // wchar_t - Used for Unicode
        // char16_t  - Used for Unicode
        // char32_t - Used for Unicode
    // Numbers
        // Unsigned integer - e.g. 5U
        auto x = 5U; // This creates an unsigned integer variable with the "auto" keyword, which is a C++ 11 feature (i.e. must compile by appending -std=c++11 at the end of the command)
        // Unsigned long - e.g. 5UL
        // Unsigned long long - e.g. 5ULL
        // Double - e.g. 5.0
        // Long - e.g. 5.0L
        // Float - e.g. 5.0F

        return 0;
}