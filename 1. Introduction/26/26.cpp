#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main()
{
    // Conditional operator
    int answer = 11;
    cout << "Guess the number:\n";
    int guess;
    cin >> guess;
    int points = guess == answer ? 10 : 0; // If guess is equal to answer, assign a value of 10 to points, otherwise assign a value of 0
    string response = guess == answer ? "Good job!" : "WRONG!";
    cout << response << " You have " << points << " points\n";

    return 0;
}