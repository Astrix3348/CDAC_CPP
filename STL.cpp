#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> mylist;

    mylist.push_back(1);
    mylist.push_back(2);
    mylist.push_back(1);
    mylist.push_back(2);
    mylist.push_back(1);
    mylist.push_back(2);

    mylist.sort();

    mylist.reverse();

    for (int i : mylist)
    {
        cout << i << endl;
    }

    return 0;
}