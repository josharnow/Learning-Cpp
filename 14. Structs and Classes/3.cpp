#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::string;
using std::vector;

class User
{
    string status;

public:
    string first_name;
    string last_name;
    string get_status()
    {
        return status = "Gold";
    }
    User() // Constructor: if no constructors are present, one without parameters will be implicitly created. However, if you do define a constructor with parameters, the constructor without parameters WILL NOT be implicitly created and must be explicitly defined.
    {
        cout << "Constructor\n";
    }
    User(string first_name, string last_name, string status)
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
    }
    ~User() // Destructor: invoked when the object is destroyed, similarly to how the constructor is invoked when an object is created
    {
        cout << "Destructor\n";
    }
};

int add_user_if_not_exists(vector<User> &users, User user)
{
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].first_name == user.first_name &&
            users[i].last_name == user.last_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}

int main()
{
    User user("Josh", "Arnow", "Gold");
    cout << user.first_name << '\n';
    cout << user.last_name << '\n';
    cout << user.get_status() << '\n';

    return 0;
}