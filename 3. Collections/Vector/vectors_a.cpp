#include <iostream>
#include <vector> // Vectors are part of c++11

int main()
{
    std::vector<int> data = {1, 2, 3}; // Unlike arrays, vectors keep track of their size and are dynamically sized
    data.push_back(12);
    std::cout << data[data.size() - 1] << "\n";
    data.pop_back();
    std::cout << data.size() << "\n";
}