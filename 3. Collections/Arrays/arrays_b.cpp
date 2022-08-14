#include <iostream>
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
    int guesses[] = {12, 43, 23, 43, 23};
    cout << sizeof(guesses) << "\n";
    int size = sizeof(guesses) / sizeof(int);
    print_array(guesses, size);
    
    return 0;
}