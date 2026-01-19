#include <iostream>
using namespace std;

class Appliance
{
public:
    int ap_id;
    string brand;
    int price;
    int warranty;

    Appliance(int ap_id, string brand, int price, int warranty)
    {
        this->ap_id = ap_id;
        this->brand = brand;
        this->price = price;
        this->warranty = warranty;
    }

    Appliance()
    { // we have made a default constructor for array
    }

    void input();
    void display(Appliance appliances[], int n);
    void warrantDisplay(Appliance appliances[], int n);
    void displaySingleAppliance(Appliance appliances);
};

void Appliance ::input()
{
    int n;
    cout << "enter the number of appliances to add: ";
    cin >> n;
    Appliance appliances[n];
    for (int i = 0; i < n; i++)
    {
        int id;
        string brand;
        int price;
        int warranty;

        cout << "enter id: ";
        cin >> id;
        cout << "enter brand: ";
        cin >> brand;
        cout << "enter price: ";
        cin >> price;
        cout << "enter warranty: ";
        cin >> warranty;
        cout << endl;

        appliances[i] = Appliance(id, brand, price, warranty);
    }

    display(appliances, n);
    warrantDisplay(appliances, n);
}

void Appliance ::display(Appliance appliances[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "id: " << appliances[i].ap_id << endl;
        cout << "brand: " << appliances[i].brand << endl;
        cout << "price: " << appliances[i].price << endl;
        cout << "warranty: " << appliances[i].warranty << endl;
        cout << "===============" << endl;
    }
}

void Appliance ::displaySingleAppliance(Appliance appliances)
{
    cout << endl;
    cout << "id: " << appliances.ap_id << endl;
    cout << "brand: " << appliances.brand << endl;
    cout << "price: " << appliances.price << endl;
    cout << "warranty: " << appliances.warranty << endl;
    cout << "===============" << endl;
}

void Appliance ::warrantDisplay(Appliance appliances[], int n)
{
    cout << endl;
    cout << endl;
    cout << "===============" << endl;
    for (int i = 0; i < n; i++)
    {
        if (appliances[i].warranty > 2)
        {
            displaySingleAppliance(appliances[i]);
        }
    }
    cout << "===============" << endl;
}

int main()
{
    Appliance a;
    a.input();

    return 0;
}