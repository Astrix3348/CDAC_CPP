#include <iostream>
using namespace std;

class Vehicle
{
protected:
    int vehicleId;
    string brand;
    int price;

public:
    void inputDetails()
    {
        cout << "enter id: ";
        cin >> vehicleId;
        cout << "enter brand: ";
        cin >> brand;
        cout << "enter price: ";
    };
    void displayDistails();
};

class ElectricVehicle : public Vehicle
{
protected:
    int batterCapacity;
    int chargingTime;

public:
    void inputDetails()
    {
        Vehicle ::inputDetails(); // reusing
        cin >> price;
        cout << "enter capacity";
        cin >> batterCapacity;
        cout << "enter charging";
        cin >> chargingTime;
    }
    void displayDistails()
    {
        if (batterCapacity > 50 && chargingTime < 2)
        {
            cout << "Id: " << vehicleId << endl;
            cout << "brand: " << brand << endl;
            cout << "price: " << price << endl;
            cout << "battery: " << batterCapacity << endl;
            cout << "charging: " << chargingTime << endl;
        }
    }
};

int main()
{
    ElectricVehicle ev[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter details for vehicle " << i + 1 << endl;
        ev[i].inputDetails();
    }

    for (int i = 0; i < 3; i++)
    {
        ev[i].displayDistails();
    }

    return 0;
}