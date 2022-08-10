#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main()
{
    int choice;

    do
    {
        cout << "0. Quit\n1. Play Game\n";
        cin >> choice;
        
        switch (choice)
        {
        case 0:
            cout << "Thanks for nothing\n";
            break;
        case 1:
            cout << "Let's play!\n";
            break;
        }
    } while (choice != 0);
    

}