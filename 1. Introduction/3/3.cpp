#include <iostream>

int main()
{
  int slices;
  std::cout << "How many slices do you want?\n"; // Cout is an object; more specifically, an instance of the ostream class
  std::cin >> slices; // Arrows point in the direction of data flow; e.g. with cout, data flows towards the console. With cin, data flows from the console and is stored in a variable. 
  // Cin is also an object; more specifically, an instance of the istream class
  std::cout << "You have " << slices << " slices of pizza.\n";
  return 0;
}