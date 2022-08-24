#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::string;

template <typename T> // Makes creating a second overloaded function unnecessary in this case
void swap(T &a, T &b) // "T" is a generic type
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void swap(T a[], T b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        T temp = a[i]; // Type here does not refer to an integer array, but to an integer
        a[i] = b[i];
        b[i] = temp;
    }
}

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    cout << "a: " << a << "\tb: " << b << '\n';

    string c = "String c";
    string d = "String d";

    swap(c, d); // Invokes the swap procedure w/ 2 parameters
    cout << "c: " << c << "\td: " << d << '\n';

    int nines[] = {9, 9, 9, 9, 9, 9};
    int ones[] = {1, 1, 1, 1, 1, 1};

    for (int i = 0; i < 6; i++)
    {
        cout << nines[i] << " " << ones[i] << '\t';
    }
    cout << '\n';

    swap(nines, ones, 6); // Invokes the swap procedure w/ 3 parameters
    
    for (int i = 0; i < 6; i++)
    {
        cout << nines[i] << " " << ones[i] << '\t';
    }
    cout << '\n';

    return 0;
}