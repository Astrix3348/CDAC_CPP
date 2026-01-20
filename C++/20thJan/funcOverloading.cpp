#include <iostream>
using namespace std;

class Statistics
{
public:
    static void average(int a, int b);
    static void average(float a, float b);
    static void average(int arr[], int n);
};

void Statistics ::average(int a, int b)
{
    cout << "the average is " << (a + b) / 2 << endl;
}

void Statistics ::average(float a, float b)
{

    cout << "the average is " << (a + b) / 2 << endl;
}

void Statistics ::average(int arr[], int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "the average is: " << sum / n << endl;
}

int main()
{

    cout << "type 1 for int, 2 for float, 3 for array" << endl;
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        int a, b;
        cout << "enter 1st num: ";
        cin >> a;
        cout << "enter 2st num: ";
        cin >> b;

        Statistics ::average(a, b);

        break;

    case 2:
        float x, y;
        cout << "enter 1st num: ";
        cin >> x;
        cout << "enter 2st num: ";
        cin >> y;

        Statistics ::average(x, y);
        break;
    case 3:
        int len;
        cout << "enter len of array: ";
        cin >> len;
        int arr[len];

        Statistics ::average(arr, len);
        break;
    }

    return 0;
}