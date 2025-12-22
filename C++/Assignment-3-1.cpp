#include <iostream>
using namespace std;

class ElectronicItem
{
public:
    string itemName;
    int weight;
    string originCity;

    void input()
    {
        cout << "itemName: ";
        cin >> itemName;
        cout << "weight: ";
        cin >> weight;
        cout << "origin: ";
        cin >> originCity;
    }

    void display()
    {
        cout << "name: " << itemName << endl;
        cout << "weight: " << weight << endl;
        cout << "origin: " << originCity << endl;
    }
};

class HomeAppliances : public ElectronicItem
{
    int rating;
    int plasticPercent;

public:
    static int count;
    void input()
    {
        ElectronicItem ::input();
        cout << "rating: ";
        cin >> rating;
        cout << "plastic: ";
        cin >> plasticPercent;

        if (plasticPercent > 70)
        {
            count++;
        }
    }

    void display()
    {
        ElectronicItem ::display();
        cout << "rating: " << rating << endl;
        cout << "plastic: " << plasticPercent << endl;
    }
};

int HomeAppliances ::count = 0;

class MobileDevice : public ElectronicItem
{
    int capacity;
    bool crack;

public:
    void input()
    {
        ElectronicItem ::input();
        cout << "capacity: ";
        cin >> capacity;
        cout << "crack? ";
        cin >> crack;
    }
    void display()
    {

        ElectronicItem ::display();
        cout << "capacity: " << capacity << endl;
        cout << "crack: " << crack << endl;
    }

    int getCapacity()
    {
        return capacity;
    }
};
int main()
{
    HomeAppliances hp[2];
    MobileDevice md[2];

    cout << "\nEnter Home Appliances:\n";
    for (int i = 0; i < 2; i++)
    {
        hp[i].input();
    }

    cout << "\nEnter Mobile Devices:\n";
    for (int i = 0; i < 2; i++)
    {
        md[i].input();
    }

    cout << "\n--- Mobile Devices with battery > 3000 ---\n";
    for (int i = 0; i < 2; i++)
    {
        if (md[i].getCapacity() > 3000)
        {
            md[i].display();
        }
    }
    cout << "\nHome appliances with more than 70% recyclable plastic: "
         << HomeAppliances::count << endl;

    return 0;
}