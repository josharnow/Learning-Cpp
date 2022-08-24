#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::string;
using std::vector;

// Getters and setters are used for encapsulation
class User
{
    static int user_count; // Static data member: can only access other static members (these members can be public or private). Also cannot define static data members inline
    string status = "Gold";

    public:
        static int get_user_count()
        {
            return user_count; // user_count can be accessed because it is also a static member
        }
        string first_name;
        string last_name;
        string get_status() // Getter
        {
            return status; // Returns this->status implicitly because status is not defined elsewhere within the function scope
        }
        void set_status(string status) // Setter
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
            user_count--; // Lowers the user count when a user instance is destroyed
        }
};

int User::user_count = 0; // Static data members must be defined OUTSIDE of the class. This is because memory is not allocated for it when creating the class structure

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
    User user, user1, user2, user3, user4;
    user.set_status("Tacos");
    cout << user.get_status() << '\n';
    
    cout << User::get_user_count() << '\n';
    
    user.~User(); // Calls the destructor

    cout << User::get_user_count() << '\n';

    return 0;
}