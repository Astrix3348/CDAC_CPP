/*
Create a class person for maintaining the details of persons related to a institute.
Create derived class to maintain details of student or faculty.
write functions to insert the data and display the data.
*/
#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int prn;
    string email;
};

class Student : public Person
{
public:
    void inputDets(Student students[], int n);
    void display(Student students[], int n);
    Student()
    {
    }
};

void Student ::display(Student students[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "name: " << students[i].name << endl;
        cout << "prn: " << students[i].prn << endl;
        cout << "email: " << students[i].email << endl;

        cout << "============" << endl;
    }
}

void Student ::inputDets(Student students[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "enter name: ";
        cin >> students[i].name;
        cout << "enter prn: ";
        cin >> students[i].prn;
        cout << "enter email: ";
        cin >> students[i].email;
    }

    cout << "=============" << endl;

    display(students, n);
}

int main()
{
    int n;
    cout << "enter number of students: ";
    cin >> n;
    Student stu[n];
    stu->inputDets(stu, n);

    return 0;
}