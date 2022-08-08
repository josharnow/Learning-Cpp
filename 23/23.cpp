#include <iostream>
using std::cout;

int main()
{
    // Loops
    int i = 0; // Initialization
    while (i < 10) // Condition
    {
        cout << "i is " << i << "\n";
        i++;    // Update
    }

    for (int j = 0; j < 10; j++) // Use over a while loop when you know the number of times something should be executed (Can create indefinite loops with while loops, e.g. while(true))
    {
        cout << "j is " << j << "\n";
    }
    

    return 0;
}