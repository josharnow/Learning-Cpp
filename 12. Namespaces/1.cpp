// Namespaces can be used to group functions together (e.g. functions with common functionality)
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

namespace utilz
{
    void print_array(const int data[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << data[i] << '\t';
        }
        cout << '\n';
    }
}


int main()
{
    int data[] = {1, 2, 3};
    int size = 0;
    for (int num : data)
    {
        size++;
    }

    utilz::print_array(data, size);

    return 0;
}