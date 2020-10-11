// task3 cpp program to find area of circle and rectangle using function overloading

#include <iostream>
#define PI 3.14

using namespace std;

double Area(float r)
{
    return PI * r * r;
}

float Area(float l, float b)
{
    return l * b;
}

int main()
{
    float a,r,l,b, area;
    cout << "Area of a" << endl << "1.cirlce" << endl << "2.rectangle" << endl;
    cin >> a;
    if (a == 1)
    {
        cout << "radius: ";
        cin >> r;
        area = Area(r);
    }
    else if (a == 2)
    {
        cout << "lenght and breadth: ";
        cin >> l >> b;
        area = Area(l, b);
    }
    cout << area;
    return 0;
}
