#include <iostream>
using namespace std;

class Box
{
public:
    int l;
    int b;
    int h;

    Box()
    {
    }

    Box(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }

    void display()
    {
        cout << l << "-" << b << "-" << h << endl;
    }

    void input()
    {
        cin >> l >> b >> h;
    }
    int volume()
    {
        return l * b * h;
    }
    bool operator>(Box other)
    {
        return this->volume() > other.volume();
    }
    Box operator+(Box other)
    {
        return Box(l + other.l, this->b + other.b, this->h + other.h);
    }

    Box operator-(Box other)
    {
        return Box(l - other.l, b - other.b, h - other.h);
    }

    bool operator==(Box other)
    {
        return this->volume() == other.volume();
    }

    void operator++()
    {
        l++;
        b++;
        h++;
    }

    void operator++(int)
    {
        l++;
        b++;
        h++;
    }

    friend ostream &operator<<(ostream &out, Box b1)
    {
        out << b1.l << "--" << b1.b << "--" << b1.h << endl;
        return out;
    }
};

int main()
{
    Box b1, b2;
    cout << "enter for 1st box: ";
    b1.input();

    cout << b1;

    // ++b1;
    // b1++;
    // b1.display();

    // cout << "enter for 2nd box: ";
    // b2.input();

    // cout << (b1 == b2) << endl;

    // Box b3 = b1 + b2;
    // b3.display();

    // Box b4 = b1 - b2;
    // b4.display();

    // if (b1 > b2)
    // {
    //     cout << "vol of 1 is greater" << endl;
    // }
    // else
    // {
    //     cout << "second" << endl;
    // }

    return 0;
}