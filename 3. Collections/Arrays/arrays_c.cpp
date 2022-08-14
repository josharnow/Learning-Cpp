#include <iostream>
#include <limits>
using std::cin;
using std::cout;
using std::string;

void print_array(int array[], int size) // Must also pass in size because the array data type does not keep track of its size. When we pass the array to a function, it decays to a pointer
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
    cout << std::endl;
}

int main()
{
    const int SIZE = 10;
    int guesses[SIZE];

    int count = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Guess #" << i + 1 << ":\n";
        if (cin >> guesses[i]) // Returns cin, which only evaluates to true if the value it takes in is properly stored inside of a variable
        {
            // input worked
            count++;
        } else
        {
            // invalid character
            break;
        }
        
    }
    print_array(guesses, count);
    cin.clear(); // Used to remove invalid input left inside of input stream
    // cin.ignore(10000, '\n'); // Ignores 10,000 characters
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // This is an alternative to above, instead removing the maximum number of characters

    string test;
    cout << "Enter a test string:" << "\n";
    cin >> test;
    cout << test << "\n";

    
    return 0;
}