#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::string;
using std::vector;

struct Rectangle 
{
    double length;
    double width;
};

double area(double length, double width) // rectangle
{
    return length * width;
}

double area(double length) // square
{
    return length * length;
}

double area(Rectangle rectangle)
{
    return rectangle.length * rectangle.width;
}

double pow(double base, int pow = 2) // "pow" is set to a default value of 2; if an argument isn't given, the value will be set at 2
{
    int total = 1;
    for (int i = 0; i < pow; i++)
    {
        total *= base;
    }
    return total;
}

int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;

    cout << area(rectangle.length, rectangle.width) << '\n'; // Passing in two int
    cout << area(rectangle.length) << '\n'; // Passing in one int
    cout << area(rectangle) << '\n'; // Passing in one Rectangle object

    cout << pow(3, 3) << '\n';
    cout << pow(3) << '\n';

    return 0;
}