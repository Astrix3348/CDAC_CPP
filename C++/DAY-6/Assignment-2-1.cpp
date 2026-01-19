#include <iostream>
using namespace std;

class Appliance
{
protected:
    int ApplianceId;
    string brand;
    long price;
};

class SmartAppliance : protected Appliance
{
protected:
    string connectivityType;
    int warranty;

public:
    void inputDetails()
    {
        cout << "id: ";
        cin >> ApplianceId;
        cout << "brand: ";
        cin >> brand;
        cout << "price: ";
        cin >> price;
        cout << "connection: ";
        cin >> connectivityType;
        cout << "warranty: ";
        cin >> warranty;
    }
    void display()
    {
        if (warranty > 2)
        {
            cout << "Details are" << endl;
            cout << ApplianceId << endl;
            cout << brand << endl;
            cout << price << endl;
            cout << connectivityType << endl;
            cout << warranty << endl;
        }
    }
};

int main()
{
    SmartAppliance sa[3];
    for (int i = 0; i < 3; i++)
    {
        sa[i].inputDetails();
    }

    for (int i = 0; i < 3; i++)
    {
        sa[i].display();
    }

    return 0;
}