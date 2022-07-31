#include <iostream>

int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    int x = 5;

    x = multiply(x,6);

    std::cout << x << "\n";
    
    return 0;
}