// count the number of objects created and delete
#include <iostream>
using namespace std;

class Check
{
public:
    Check();
    static int count;
    static int delCount;
    ~Check();
};

int Check ::count = 0;
int Check ::delCount = 0;

Check ::Check()
{
    cout << "Object is created." << endl;
    count++;
}

Check ::~Check()
{
    cout << "Object deleted." << endl;
    delCount++;
}

int main()
{
    Check *c1 = new Check();
    Check *c2 = new Check();

    delete c1;

    cout << "total objects created: " << Check ::count << endl;
    cout << "total objects deleted: " << Check ::delCount << endl;

    return 0;
}