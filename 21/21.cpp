#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main()
{
    // Control flow
        // Branching (conditionals)
            // if/else if/else statements
            // switch statements
        // Looping
            // while loops
            // for loops
            // do-while loops

    string name_answer = "Josh";
    int age_answer = 28;
    string name_guess;
    int age_guess;
    cout << "Guess my name!\n";
    cin >> name_guess;
    cout << "Guess my age!\n";
    cin >> age_guess;

    if (name_guess == name_answer && age_guess == age_answer)
    {
        cout << "You got it right!\n";
    }


    return 0;
}