#include <iostream>
using namespace std;

class Base
{
private:
    void pri() { cout << "private of Base" << endl; }

protected:
    void pro() { cout << "protected of Base" << endl; }

public:
    void pub()
    {
        cout << "public of Base" << endl;
        pro();
        pri();
    }
};

class Derived : public Base
{
private:
    void pri_d() { cout << "private of Derived" << endl; }

protected:
    void pro_d() { cout << "protected of Derived" << endl; }

public:
    void pub_d() { cout << "public of Derived" << endl; }
};

int main()
{
    Base b;
    Derived d;

    d.pub();

    return 0;
}