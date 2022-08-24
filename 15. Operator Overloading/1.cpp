#include <iostream>
using std::cout;

class Position
{
    public:
        int x = 10;
        int y = 20;

        Position operator + (Position pos) // Using the "pos3 = pos1 + pos2" example below, inside of the instance pos1, this "operator +" method is called and takes in the operand on the righthand side of the operator as an argument - Return type: Position
        {
            Position new_pos;
            new_pos.x = x + pos.x; // "x" refers to the instance on the lefthand side of the "+" operator, while pos.x refers the the argument passed in from the righthand side of the "+" operator. .x and .y are used to retrieve the x and y instance properties
            new_pos.y = y + pos.y;
            return new_pos;
        }
        bool operator == (Position pos)
        {
            if (x == pos.x && y == pos.y)
            {
                return true;
            }
            return false;
        }
};

int main()
{
    Position pos1, pos2;
    Position pos3 = pos1 + pos2;

    cout << pos3.x << " " << pos3.y << '\n';

    if (pos1 == pos2)
    {
        cout << "They are the same!\n";
    }
    

    return 0;
}