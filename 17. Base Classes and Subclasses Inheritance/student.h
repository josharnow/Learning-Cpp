#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "user.h"
using std::string;
using std::vector;

class Student : public User
{
    public:
        void output();
};