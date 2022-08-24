#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

class User
{
    static int user_count;
    string status = "Gold";

public:
    static int get_user_count()
    {
        return user_count;
    }
    string first_name;
    string last_name;
    string get_status()
    {
        return status;
    }
    void set_status(string status)
    {
        if (status == "Gold" || status == "Silver" || status == "Bronze")
        {
            this->status = status;
        }
        else
        {
            this->status = "No status";
        }
    }

    User()
    {
        user_count++;
    }
    User(string first_name, string last_name, string status)
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
        user_count++;
    }
    ~User()
    {
        cout << "Destructor\n";
        user_count--;
    }

    friend void output_status(User user); // Friend method is declared here
};

int User::user_count = 0;

void output_status(User user) // Friend method is defined here (Allows access to private variables without polluting the class with public methods)
{
    cout << user.status; // This works despite "status" being private 
}

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

// Can optionally define the User instance as a constant since it isn't changing
std::ostream &operator << (std::ostream &output, const User user) // Returns a reference of the ostream object (to prevent duplication of the object) because cout is an object of type "ostream", and we would like to be able to append more things to the end of the expression after using the << operator
{
    output << "First name: " << user.first_name << "\nLast name: " << user.last_name;
    return output;
}

std::istream &operator >> (std::istream &input, User &user) // Must pass in the user object by reference so that the original object can be modified
{
    input >> user.first_name >> user.last_name; // On input, the first string you type without spaces is used for the "first_name" and after a space is typed the next string is used for "last_name"
    return input;
}

int main()
{
    User user;
    cout << "Type in your first and last name separated by a space\n";
    cin >> user;
    cout << user << '\n';

    output_status(user);
    // cout << '\n';

    return 0;
}