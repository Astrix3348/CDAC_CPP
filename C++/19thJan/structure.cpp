#include <iostream>
using namespace std;

struct Student
{
    int prn;
    string s_name;

public:
    void display();
};

void Student ::display()
{
    cout << prn << endl;

    cout << s_name << endl;
    ;
}

int main()
{
    Student s1;
    cout << "enter prn: ";
    cin >> s1.prn;

    cout << "enter name: ";
    cin >> s1.s_name;

    s1.display();

    Student *s2;
    cout << "enter prn: ";
    cin >> s2->prn;

    cout << "enter name: ";
    cin >> s2->s_name;

    s2->display();

    return 0;
}