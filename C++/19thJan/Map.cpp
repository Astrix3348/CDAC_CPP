#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> student;
    student[1] = "aakash";
    student[2] = "aastha";

    student.insert({3, "monica"});

    for (auto it : student)
    {
        cout << it.first << "<-->" << it.second << endl;
    }

    return 0;
}