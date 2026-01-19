#include <iostream>
using namespace std;

class space
{
    int x;
    int y;

public:
    void getData(int a, int b);
    void display();
    void operator-();
};
void space ::getData(int a, int b)
{
    x = a;
    y = b;
}
void space ::display()
{
    cout << x << "<-->" << y << endl;
}
void space ::operator-()
{
    x = -x;
    y = -y;
}

int main()
{
    space s;
    s.getData(10, -20);
    cout << "s: ";
    s.display();
    -s;
    cout << "s: ";
    s.display();

    return 0;
}