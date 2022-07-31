#include <iostream>

int main()
{
  int slices; // Variable declaration
  slices = 5; // Variable initialization
  std::cout << "You Have " << slices << " slices of pizza." << std::endl; // endl is an alternative to using \n; endl flushes the output buffer every time it's called, wheras \n doesn't. \n has better performance
  return 0;
}