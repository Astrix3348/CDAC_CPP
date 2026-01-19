#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.pop_back();
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.pop_back();

    v.insert(v.begin(), 15);

    for (auto i : v)
    {
        cout << i << endl;
    }

    return 0;
}