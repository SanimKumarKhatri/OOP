// task1.cpp CPP program to overload unary ++ for postfix and prefix increment operation on complex numbers using member function.

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
		real = a;
		imaginary = b;
	}
	complex operator ++()
	{
		complex c;
		c.real=++real;
		c.imaginary=++imaginary;
		return c;
	}
	complex operator ++(int)
	{
		complex c;
		c.real=real++;
		c.imaginary=imaginary++;
		return c;
	}
	void display_complex()
	{
		cout << real << "+i" << imaginary << endl;
	}
};

int main()
{
	complex c1, c2(1.1, 2), c3(3, 5);
	c1++;
	++c3;
	c2 = c1++;
	c1.display_complex();
	c2.display_complex();
	c3.display_complex();
	return 0;
}

