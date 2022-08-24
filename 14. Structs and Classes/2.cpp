#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::string;
using std::vector;

class User // By default, the access modifiers for variables inside of classes are set to "private"
{
    string status;
    public:
        string first_name;
        string last_name;
        string get_status()
        {
            return status = "Gold";
        }
};

int add_user_if_not_exists(vector<User> &users, User user) // users is passed by reference so the variable will be modified
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
    // User user;
    // user.first_name = "Josh";

    vector<User> users;
    // users.push_back(user); // Can pass in an instance of a class
    users.push_back(User()); // Can also call a constructor directly, instantiating new User instance within the method

    User user1, user2, user3;
    user1.first_name = "Sally";
    user1.last_name = "Swan";
    user2.first_name = "Jake";
    user2.last_name = "Johnson";
    user3.first_name = "Josh";
    user3.last_name = "Arnow";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User user;
    user.first_name = "Jake";
    user.last_name = "Johnson";

    cout << add_user_if_not_exists(users, user) << '\n';

    User new_user;
    new_user.first_name = "Michael";
    new_user.last_name = "Jackson";

    cout << add_user_if_not_exists(users, new_user) << '\n';
    cout << users.size() << '\n';

    return 0;
}