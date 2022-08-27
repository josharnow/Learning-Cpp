#include <iostream>
// #include <string>
// #include <vector>
#include "user.h"
#include "teacher.h"
#include "student.h"
using std::cin;
using std::cout;
using std::string;

void do_something(User &user) // If the argument is not passed by reference, the output method would return "I am a user"
{
    user.output();
}

int main()
{
    Teacher teacher;
    Student student;
    teacher.first_name = "Teach";
    cout << teacher.first_name << '\n';
    teacher.output();

    User &u1 = teacher; // Makes a reference to a user; because Teacher inherits from User, this should work. If not passed by reference, the output method on this object would return "I am a user"
    User &u2 = student;

    u1.output(); // Output() methods must still be added to the User class for this to work
    u2.output(); // Output() methods must still be added to the User class for this to work

    do_something(u1);
    do_something(u2);

    return 0;
}