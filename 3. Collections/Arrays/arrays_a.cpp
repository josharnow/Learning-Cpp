#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    int guesses[7];
    guesses[0] = 10;
    guesses[1] = 13;
    // etc

    int new_guesses[] = {10, 13, 55, 3, 2, 6, 8}; // Can initialize an array this way if you know the data to be inserted already
    cout << new_guesses[1] << "\n"; // Outputs 13

    int size = sizeof(new_guesses) / sizeof(new_guesses[0]); // Size in bytes / size of a single element = number of elements in array
    // int size = sizeof(new_guesses) / sizeof(int); // This is also a valid way to get the number of elements in an array
    cout << size << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << new_guesses[i] << "\t";
        if (i == size - 1)
        {
            cout << "\n";
        }
        
    }
    
    return 0;
}