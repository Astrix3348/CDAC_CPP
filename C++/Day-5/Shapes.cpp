/*
Class Shape with function:

float area()
float perimeter()

Create object for:
•⁠  ⁠Circle
•⁠  ⁠Rectangle
•⁠  ⁠Triangle
Calculate the area and display using class object and function overloading conceptClass Shape with function:
*/
#include <iostream>
#define pi 3.14
using namespace std;

class Shape
{
public:
    void perimeter(int radius);
    void area(int radius);
    void perimeter(int length, int breadth);
    void area(int length, int breadth);
    void perimeter(int s1, int s2, int s3);
    void area(int base, int height, int scam);
};

void Shape ::perimeter(int radius)
{
    cout << "perimeter of the circel is: " << 2 * pi * radius << endl;
}

void Shape ::area(int radius)
{
    cout << "area of the circle is:" << pi * radius * radius << endl;
}

void Shape ::perimeter(int length, int breadth)
{
    cout << "peri of rectangle is: " << 2 * (length + breadth) << endl;
}
void Shape ::area(int length, int breadth)
{
    cout << "area of rec is: " << length * breadth << endl;
}

void Shape ::perimeter(int s1, int s2, int s3)
{
    cout << "peri of tri is: " << (s1 + s2 + s3) << endl;
}

void Shape ::area(int base, int height, int scam)
{
    cout << "area of tri is: " << 0.5 * base * height << endl;
}

int main()
{
    Shape circle;
    Shape rectangle;
    Shape triangle;

    int radius;
    int length;
    int breadth;
    int height;
    int base;
    int s1, s2, s3;

    int n;
    do
    {
        cout << "what do you want to do?" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "enter radius of circle: ";
            cin >> radius;
            circle.perimeter(radius);
            circle.area(radius);
            break;
        case 2:
            cout << "enter length and breadth of rectangle: ";
            cin >> length >> breadth;
            rectangle.perimeter(length, breadth);
            rectangle.area(length, breadth);
            break;
        case 3:
            cout << "enter sides of triangle: ";
            cin >> s1 >> s2 >> s3;
            cout << "enter base and height of triangle: ";
            cin >> base >> height;

            triangle.perimeter(s1, s2, s3);
            triangle.area(base, height);
            break;
        default:
            cout << "exiting...";
            break;
        }

    } while (n != 4);

    return 0;
}