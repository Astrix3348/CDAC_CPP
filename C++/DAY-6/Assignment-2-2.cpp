#include <iostream>
using namespace std;

class Box
{
public:
    int lenght;
    int breadth;
    int height;

    int volume()
    {
        return lenght * breadth * height;
    }

    void input()
    {
        cout << "Enter length: ";
        cin >> lenght;
        cout << "Enter breadht: ";
        cin >> breadth;
        cout << "Enter height: ";
        cin >> height;
    }
};

bool operator>(Box &b1, Box &b2)
{
    return b1.volume() > b2.volume();
}

int main()
{
    Box b1;
    b1.input();
    Box b2;
    b2.input();

    if (b1 > b2)
    {
        cout << "b1";
    }
    else
    {
        cout << "b2";
    }

    return 0;
}