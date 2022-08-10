#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main()
{
    // Break & Continue
    string sentence = "Hello my name is Josh";
    for (int i = 0; i < sentence.size(); i++)
    {
        if (sentence[i] == 'J')
        {
            cout << "found J!\n";
            break;
        }
        if (sentence[i] == ' ')
        {
            cout << "found space!\n";
            continue;
        }
        cout << "Character #" << i << ": " << sentence[i] << "\n";
    }
    cout << "Done!\n";

    return 0;
}