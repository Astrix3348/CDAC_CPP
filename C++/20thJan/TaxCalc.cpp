#include <iostream>
using namespace std;

class Tax
{
public:
    int calculate(int income)
    {
        return (income - income * 0.1);
    }
    int calculate(int income, int age)
    {
        if (age < 60)
        {
            return (income - income * 0.1);
        }
        else
        {
            return (income - income * 0.05);
        }
    }
    double calculate(double income)
    {
        return (income - income * 0.15);
    }
};

int main()
{
    Tax t;

    cout << "is your income in int or double? (int/double): ";
    string check;
    cin >> check;

    if (check == "int")
    {
        int income;
        cout << "Specify Your income: ";
        cin >> income;

        string s;
        cout << "Are you interested in sharing your age with us? (yes/no): ";
        cin >> s;

        if (s == "yes")
        {
            int age;
            cout << "Your age is? ";
            cin >> age;
            cout << "your final income is: " << t.calculate(income, age);
        }
        else
        {
            cout << "your final income is: " << t.calculate(income);
        }
    }
    else
    {
        double income;
        cout << "Specify Your income: ";
        cin >> income;

        cout << "your final income is: " << t.calculate(income);
    }

    return 0;
}