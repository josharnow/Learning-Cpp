#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main()
{
    // Multidimensional Array
    int grades[][3] = { // Second size must be explicitly defined
        {1, 2, 3},
        {4, 5, 6}, 
        {7, 8, 9},
    };

    for(int i = 0; i < 3; i++) // Row
    {
        for(int j = 0; j < 3; j++) // Column
        {
            cout << grades[i][j] << '\t';
        }
        cout << '\n';
    }

    // Nested Vector
    vector<vector<int>> grades_vector = {
        {1, 2, 3},
        {4, 5, 6}, 
        {7, 8, 9},
    };

    for(int i = 0; i < 3; i++) // Row
    {
        for(int j = 0; j < 3; j++) // Column
        {
            cout << grades_vector[i][j] << '\t';
        }
        cout << '\n';
    }

    return 0;
}