#include <iostream>
#include <vector>
using std::cout;
using std::vector;

void print_array(const int data[], int size) // Any functions called within this function which pass in data[] must also have data[] as a constant parameter, otherwise the code will not compile because the function would violate the promise to the caller to keep the variable constant
{
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << '\t';
    }
    cout << '\n';
}

int main()
{
    int data[] = {1, 2, 3};
    int size = 0;
    for (int num : data)
    {
        size++;
    }  
    
    print_array(data, size);

    return 0;
}