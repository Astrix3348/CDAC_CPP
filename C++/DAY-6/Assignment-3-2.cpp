#include <iostream>
using namespace std;

class TaxCalculator
{
public:
    int calculateTax(int income)
    {
        return income - (income * 0.1);
    }

    int calculateTax(int income, int age)
    {
        if (age < 60)
        {
            return income - (income * 0.1);
        }
        else
        {
            return income - (income * 0.05);
        }
    }

    int calculateTax(double income)
    {
        return income - (income * 0.15);
    }
};

int main()
{
    TaxCalculator tx;
    int income;
    int age;
    bool isAge;
    double incomeDouble;
    char c;

    cout << "Specify your income in (i/d)? ";
    cin >> c;

    if (c == 'i')
    {
        cout << "Specify your income: ";
        cin >> income;
    }
    else
    {
        cout << "Specify your income: ";
        cin >> incomeDouble;
    }

    cout << "Want to specify your age?(0/1) ";
    cin >> isAge;

    if (isAge)
    {
        cout << "What is you Age: ";
        cin >> age;

        cout << "Your Income after Deduction: " << tx.calculateTax(income, age) << endl;
    }
    else
    {
        if (c == 'i')
        {
            cout << "Your Income after Deduction: " << tx.calculateTax(income) << endl;
        }
        else if (c == 'd')
        {
            cout << "Your Income after Deduction: " << tx.calculateTax(incomeDouble) << endl;
        }
    }

    return 0;
}