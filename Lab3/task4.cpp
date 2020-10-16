// task4.cpp CPP program to find the sum of two complex numbers using the concept of the overloading binary + operator using non-member/friend function

#include <iostream>

using namespace std;

class complex
{
    float r, i;
public:
    complex()
    {
        r = 0;
        i = 0;
    }
    complex(float a, float b)
    {
        r = a;
        i = b;
    }
    void display_complex()
    {
        cout << r << "+i" << i << endl;
    }
    friend complex operator +(complex , complex );
};

complex operator+(complex c1, complex c2)
{
    complex c;
    c.r = c1.r + c2.r;
    c.i = c1.i + c2.i;
    return c;
}

int main()
{
    complex c1, c2(1, 2), c3(1.1, 3), c4;
    c4 = c1 + c3;
    c4.display_complex();
    c4 = c2 + c3;
    c4.display_complex();
    return 0;
}