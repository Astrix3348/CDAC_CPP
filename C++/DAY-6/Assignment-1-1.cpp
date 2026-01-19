#include <iostream>
using namespace std;

class Statistics
{

public:
    float average(int a, int b)
    {
        return (a + b) / 2.0;
    }
    float average(float a, float b, float c)
    {
        return (a + b + c) / 3;
    }
    void average(int arr[], int n)
    {
        cout << n << endl;
    }
};

int main()
{
    Statistics s;

    cout << s.average(1, 2) << endl;
    cout << s.average(4.0, 8.0, 9.0) << endl;
    int arr[] = {1, 2, 3, 4, 6};

    int n = sizeof(arr) / sizeof(int);
    s.average(arr, n);

    return 0;
}