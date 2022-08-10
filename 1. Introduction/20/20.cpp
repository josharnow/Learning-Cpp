#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main()
{
    int x = 10 / 4; // This uses integer division as written, and therefore returns an integer result (2 in this case)
    cout << x << "\n";
    double y = 10. / 4; // This would perform double division instead (due to the added decimal on one of the operands) and be stored in a double variable
    cout << y << "\n";
    double z = 10 % 4; // Modulus operator performs division and return the remainder

    // Operator Precedence and Associativity
    // Precedence: Addition/subtraction/multiplication/division operations are carried out with PEMDAS rules; if they are in the same level of precedence, operations are performed from left to right (associativity). Other operators may have different types of associativity

        return 0;
}