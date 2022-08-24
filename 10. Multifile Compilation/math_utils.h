// 1. Header file (analogous to function declaration) [.h file]
// To ensure that this file is not included twice inside of the application, use either include guards or "#pragma once." "#pragma once" is easier and cleaner though
#pragma once

struct Rectangle
{
    double length;
    double width;
};
double area(double length, double width); // rectangle
double area(double length); // square
double area(Rectangle rectangle);
double pow(double base, int pow = 2); // Default values should ONLY be set in the header file, not the implementation file
