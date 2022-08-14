#include <iostream>
#include <array>
#include <vector>
using std::array;
using std::vector;
using std::cout;

int main()
{
    int data[] = {1, 2, 3, 4, 5, 6};

    // for (int i = 0; i < 6; i++) // Standard for loop
    // {
    //     cout << data[i] << '\t';
    // }

    for (int n : data) // Range based for loop (C++11 extension) - this type of loop is specifically designed to iterate through collections (equivalent to a foreach loop). Does not work when contained inside a function for which a standard array has been passed into because it decays to a pointer and the size information is lost
    {
        cout << n << '\t';
    }
    cout << '\n';
}