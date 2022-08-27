#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "user.h" // Include because inheriting from User
using std::string;
using std::vector;

class Teacher : public User // The teacher class inherits from the User class; prefixed with "public" to inherit all of the class members
{
    public:
        vector<string> classes_teaching;
        void output();
        Teacher();
};