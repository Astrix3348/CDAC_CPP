#include <iostream>
#include <math.h>
using namespace std;

class Coord
{
public:
    int x;
    int y;
    Coord(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    Coord()
    {
    }
    void distance(Coord c1, Coord c2);
};

void Coord ::distance(Coord c1, Coord c2)
{
    long int firstPart = pow(c2.x - c1.x, 2);
    long int secondPart = (c2.y - c1.y) * (c2.y - c1.y);

    float result = sqrt(firstPart + secondPart);

    cout << "distance for the given coordinates is: " << result << endl;
}

int main()
{
    Coord c1;
    Coord c2;

    cout << "Enter the x and y coordinates for c1: ";
    cin >> c1.x >> c1.y;
    cout << "Enter the x and y coordinates for c2: ";
    cin >> c2.x >> c2.y;

    c1.distance(c1, c2);

    return 0;
}