#include <iostream>
// #include <string>
// #include <vector>
#include "user.h"
using std::cin;
using std::cout;
using std::string;

int main()
{
    User user;
    cout << "Type in your first and last name separated by a space\n";
    cin >> user;
    cout << user << '\n';

    output_status(user);
    cout << '\n';

    return 0;
}