#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main()
{
    // Factorial
    // For loop
    int fact;
    cout << "Type a number to take the factorial of: " << "\n";
    cin >> fact;

    int factorial = fact;

    for (int i = factorial - 1; i > 0; i--)
    {
        factorial *= i;
    }
    cout << "factorial of " << fact << ": " << factorial << "\n";
    
    // While loop
    int j = fact - 1;
    while (j < 0)
    {
        cout << j << "\n";
        j++;
    }
    
    // Do while loop - Executes at least once
    string password = "testpassword";
    string guess;
    do 
    {
        cout << "Guess the password:" << "\n";
        cin >> guess;
    } while (guess != password);

    return 0;
}