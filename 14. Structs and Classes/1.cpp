#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::string;

// Typically, structs are only used to store data, not methods, 
struct User // By default, the access modifiers for variables inside of structs are set to "public"
{
    string first_name; // Data member
    string last_name;
    string get_status()
    {
        return status = "Gold"; // Default value for "status" is set to "Gold"
    }
    private: // Every variable after the "private" access modifier is set to be private
        string status; // Since the status variable is set to private in the struct, it cannot be modified from an instance
};

int main()
{
    User user; // Instantiates a user object (user) from the User struct
    user.first_name = "Josh";
    user.last_name = "Arnow";

    cout << "First name: " << user.first_name << '\n';
    cout << "Last name: " << user.last_name << '\n';
    cout << "Status: " << user.get_status() << '\n';

    return 0;
}