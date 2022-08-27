#include <iostream>
// #include <string>
// #include <vector>
#include "user.h"
#include "teacher.h"
#include "student.h"
using std::cin;
using std::cout;
using std::string;

int main()
{
    Teacher teacher;
    User &u = teacher; // u is of type User, but will act as a teacher. 
    u.output(); // An output method must still exist on the User class to compile, though, even through the Teacher class has a method of the same name. This will invoke the child version of the method call (i.e. the teacher version)

    Student student;
    User &u1 = teacher;
    User &u2 = student;
    u1.output();
    u2.output();

    return 0;
}