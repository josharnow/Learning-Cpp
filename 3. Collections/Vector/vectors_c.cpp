#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

void print_vector(vector<int> vector)
{
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << '\t';
    }
    cout << '\n';
}

void play_game()
{
    vector<int> guesses;

    int random = rand() % 251; // Remainder will be somewhere between 0 and 250
    cout << random << '\n';
    cout << "Guess a number:\n";
    while (true)
    {
        int guess;
        cin >> guess;

        guesses.push_back(guess);

        if (guess == random)
        {
            cout << "You win!\n";
            break;
        }
        else if (guess < random)
        {
            cout << "Too low\n";
        }
        else
        {
            cout << "Too high\n";
        }
    }
    print_vector(guesses);
}

int main()
{
    srand(time(NULL)); // Seeds a random number once when the application starts, using the computer clock to generate the seed

    int choice;

    do
    {
        cout << "0. Quit\n1. Play Game\n";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Thanks for nothing\n";
            break;
        case 1:
            play_game();
            break;
        }
    } while (choice != 0);
}