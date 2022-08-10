#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main()
{
    int age;
    cout << "What is your age?\n";
    cin >> age;
    switch(age) // Integers MUST be used as arguments inside of switch statements
    {
        case 13:
            cout << "Your age is 13.\n";
            break;
        case 14:
            cout << "Your age is 14.\n";
            break;
        case 15:
        case 16:
            cout << "Your age is 15 or 16.\n";
            break;
        default:
            cout << "Catch all\n";
            break;
    }

    enum seasons{summer,spring,fall,winter};
    seasons now = winter;
    switch(now) // An enum can be used here because its values are actually stored as int types
    {
        case summer:
            cout << "It's summer!\n";
            break;
        case spring:
            cout << "It's spring!\n";
            break;
        case fall:
            cout << "It's fall!\n";
            break;
        case winter:
            cout << "It's winter!\n";
            break;
    }

    enum class Season{summer,spring,fall,winter}; // Using the class enums forces you to prefix the value with the name of the enum (namespace?)
    Season new_now = Season::fall;
    switch(new_now) // An enum can be used here because its values are actually stored as int types
    {
        case Season::summer:
            cout << "It's summer!\n";
            break;
        case Season::spring:
            cout << "It's spring!\n";
            break;
        case Season::fall:
            cout << "It's fall!\n";
            break;
        case Season::winter:
            cout << "It's winter!\n";
            break;
    }

    return 0;
}