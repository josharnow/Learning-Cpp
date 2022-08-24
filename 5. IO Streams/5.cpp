#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
using std::cin;
using std::cout;
using std::string;
using std::vector;

// Refactoring code

void save_score(int guess_count) // Saves score
{
    std::ifstream input("best_score.txt");
    if (!input.is_open())
    {
        cout << "Unable to read file\n";
        return; // Breaks out of game and returns to the menu
    }
    int best_score;
    input >> best_score;

    std::ofstream output("best_score.txt"); // Can also use fstream to handle reading and writing
    if (!output.is_open())
    {
        cout << "Unable to write to file\n";
        return; // Breaks out of game and returns to the menu
    }

    if (guess_count < best_score)
    {
        cout << "Your score: " << guess_count << '\n';
        cout << "You beat the best score by " << (best_score - guess_count) << " guesses!\n";
        output << guess_count;
    }
    else
    {
        cout << "Your score: " << guess_count << '\n';
        cout << "Best score: " << best_score << '\n';
        output << best_score;
    }
}

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
    int count = 0;

    int random = rand() % 251;
    cout << random << '\n';
    cout << "Guess a number:\n";
    while (true)
    {
        int guess;
        cin >> guess;
        count++;
        // guesses.size(); // Can use this instead of count

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
    save_score(count);

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