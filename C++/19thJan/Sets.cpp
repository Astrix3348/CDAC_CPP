#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(2);

    for (auto i : s)
    {
        cout << i << endl;
    }

    if (s.find(2) != s.end())
    {
        cout << "the number 2 is present ";
    }

        return 0;
}