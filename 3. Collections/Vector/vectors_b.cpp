#include <iostream>
#include <vector>
using std::cout;
using std::vector;

void print_vector(vector<int> data)
{
    data.push_back(12);
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << '\t';
    }
    cout << '\n';
}

void print_vector_2(vector<int> &data) // Prefixing the variable with & will cause the function to copy the memory location of the argument into the function parameter (passing in by reference) rather than the value of the attribute itself (passing in by value). This means that the function can actually modify the variable that you pass into it
{
    data.push_back(12);
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << '\t';
    }
    cout << '\n';
}

int main()
{
    vector<int> data = {1, 2, 3};
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector_2(data);
    print_vector_2(data);
    print_vector_2(data);
    print_vector(data);
    print_vector(data);
}