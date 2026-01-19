#include <iostream>
#include <vector>
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
};

void display(vector<Appliance> appliances, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "id: " << appliances[i].ap_id << endl;
        cout << "brand: " << appliances[i].brand << endl;
        cout << "price: " << appliances[i].price << endl;
        cout << "warranty: " << appliances[i].warranty << endl;

        cout << endl;
    }
}

void displayWarranty(vector<Appliance> appliances, int n)
{
    cout << endl;
    cout << "====These are the appliances with warranty greater than 2====" << endl;
    for (int i = 0; i < n; i++)
    {
        if (appliances[i].warranty > 2)
        {
            cout << "id: " << appliances[i].ap_id << endl;
            cout << "brand: " << appliances[i].brand << endl;
            cout << "price: " << appliances[i].price << endl;
            cout << "warranty: " << appliances[i].warranty << endl;
        }
    }
}

void inputObjects()
{
    vector<Appliance> appliances;
    int n;
    cout << "Enter the number of appliances: ";
    cin >> n;
    int id;
    string brand;
    int price;
    int warranty;

    for (int i = 0; i < n; i++)
    {
        cout << "enter id: ";
        cin >> id;
        cout << "enter brand: ";
        cin >> brand;
        cout << "enter price: ";
        cin >> price;
        cout << "enter warranty: ";
        cin >> warranty;

        appliances.push_back(Appliance(id, brand, price, warranty));
        cout << endl;
    }

    display(appliances, n);
    cout << endl;
    displayWarranty(appliances, n);
}

int main()
{
    inputObjects();

    return 0;
}