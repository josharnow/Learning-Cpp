#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    // Reading from files
    // Way 2 (Returning a Character)
    std::ifstream file ("hello.txt");

    char temp = file.get(); // Extracts and returns a character

    std::cout << temp << '\n';

    // Way 3 (Returning a Line)
    std::string line;
    getline(file, line); // Function which takes file object (which it extracts a string from) and the variable used to store the line in as arguments
    std::cout << line << '\n';

    return 0;
}