#include <iostream>
#include <array>
using std::cout;
using std::array;

void print_stl_array(array<int, 20> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << '\t';
    }
    cout << '\n';
}

int main()
{
    array<int, 20> data = {1, 2, 3};
    print_stl_array(data);
}