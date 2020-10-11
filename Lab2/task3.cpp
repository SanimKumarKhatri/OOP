//task3 CPP program to find the sum of two complex numbers using the OOP concept.
#include <iostream>

using namespace std;

class complex
{
    float real, imaginary;
public:
    complex()
    {
        real = 0;
        imaginary = 0;
    }
    complex(float a, float b)
    {
        this->real = a;
        this->imaginary = b;
    }
    void addition(complex c1, complex c2)
    {
        real = c1.real + c2.real;
        imaginary = c1.imaginary + c2.imaginary;
    }
    void display_complex()
    {
        cout << real << "+i" << imaginary << endl;
    }
};

int main()
{ 
    complex c1, c2(1.1, 1.2), c3(4, 5), c4;
    c4.addition(c1, c2);
    c4.display_complex();
    c4.addition(c2, c3);
    c4.display_complex();
    return 0;
}