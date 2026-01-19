// count the number of objects of the class created
#include <iostream>
using namespace std;

class Cls
{
public:
    static int count;
    Cls();
    static int displayCount();
};

int Cls ::count = 0; // static defination

int Cls ::displayCount()
{
    count = 100;
    return count;
}

Cls ::Cls()
{
    cout << "object is created" << endl;
    count++;
}

int main()
{
    Cls obj1;
    Cls obj2;
    Cls obj3;

    cout << Cls ::displayCount() << endl;
    cout << "number of objects are: " << Cls ::count << endl;

    return 0;
}