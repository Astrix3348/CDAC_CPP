#include <iostream>
using namespace std;

class Vehicle
{
public:
    int vId;
    string brand;
    int price;

    void inputDetails();
    void display();
};

class Electric : public Vehicle
{
public:
    int battery;
    int charge;
    void inputDetails()
    {
        cout << "enter the id: ";
        cin >> vId;
        cout << "enter the brand: ";
        cin >> brand;
        cout << "enter the price: ";
        cin >> price;
        cout << "enter the battery: ";
        cin >> battery;
        cout << "enter the charge: ";
        cin >> charge;
    }
    void display()
    {
        if (battery > 50 && charge < 2)
        {
            cout << vId << endl;
            cout << brand << endl;
            cout << price << endl;
            cout << battery << endl;
            cout << charge << endl;
        }
    }
};

int main()
{
    Electric ec[2];
    for (int i = 0; i < 3; i++)
    {
        ec[i].inputDetails();
    }
    for (int i = 0; i < 3; i++)
    {
        ec[i].display();
    }

    return 0;
}