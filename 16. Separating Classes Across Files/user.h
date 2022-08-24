// Contains declarations
#pragma once
using std::string;
using std::vector;

class User
{
    static int user_count;
    string status = "Gold";

    public:
        static int get_user_count();
        string first_name;
        string last_name;
        string get_status();
        void set_status(string status);

        User();
        User(string first_name, string last_name, string status);
        ~User();

        friend void output_status(User user);
};

int add_user_if_not_exists(vector<User> &users, User user);
std::ostream &operator<<(std::ostream &output, const User user);
std::istream &operator>>(std::istream &input, User &user);