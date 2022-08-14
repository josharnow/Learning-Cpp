#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using std::cin;
using std::cout;
using std::string;

void print_array(int array[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << array[i] << '\t';
    }
        cout << '\n';
}

void play_game()
{
    int guesses[250];
    int guess_count = 0;

    int random = rand() % 251; // Remainder will be somewhere between 0 and 250
    cout << random << '\n';
    cout << "Guess a number:\n";
    while (true)
    {
        int guess;
        cin >> guess;
        guesses[guess_count++] = guess; // Increments the variable guess_count after value assignment (postfix increment operator)

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
    print_array(guesses, guess_count);
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