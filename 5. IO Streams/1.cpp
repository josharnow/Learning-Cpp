#include <iostream>
#include <fstream>
#include <vector>
// #include <string>

int main()
{
    // Writing to files
    std::string filename;
    std::cout << "Type a file name to open:\n";
    std::cin >> filename;

    std::ofstream file; // Instantiates the "file" object from the "ofstream" class
    // file.open("hello.txt"); // This will replace the content of the hello.txt file
    file.open(filename.c_str(), std::ios::app); // This will append (rather than replace) the content of the hello.txt file

    // std::ofstream file ("hello.txt", std::ios::app); // Can also type like this instead
    
    if (file.is_open())
    {
        std::cout << "The file is open\n";
    } else
    {
        std::cout << "Error: Unable to open file\n";
    }

    std::vector<std::string> names;
    names.push_back("Josh");
    names.push_back("Paul");
    names.push_back("John");

    for(std::string name : names)
    {
        file << name << '\n';
    }

    file.close(); // Explicitly invoking this method on the file to close it is optional in most scenarios, as the program will implicitly close the file. This must be invoked to return errors involved with opening/closing a file
    return 0;
}