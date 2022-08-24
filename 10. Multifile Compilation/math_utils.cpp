// 2. Implementation file (analogous to function definition) [.cpp file]
// Ensure any includes necessary for below functions to work are included
#include "math_utils.h" // Using double quotes will search for the file in the current directory

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

double pow(double base, int pow) // Default values should ONLY be set in the header file, not the implementation file
{
    int total = 1;
    for (int i = 0; i < pow; i++)
    {
        total *= base;
    }
    return total;
}