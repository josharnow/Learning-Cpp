#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    // Reading from files
    // Way 1 (Returning entire contents of file)
    std::ifstream file ("hello.txt");

    std::vector<std::string> names;
    // std::vector<char> names;

    std::string input;
    // char input;
    while (file >> input) // Use the "file" object as if it's "cin"; evaluates to true if read is successful and returns file
    {
        names.push_back(input);
    }

    for (std::string name : names)
    // for (char name : names) // Each letter is considered a name when the type is specified as char rather than string
    {
        std::cout << name << '\n';
    }

    return 0;
}