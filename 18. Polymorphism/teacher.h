#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "user.h"
using std::string;
using std::vector;

class Teacher : public User
{
    public:
        vector<string> classes_teaching;
        void output();
};