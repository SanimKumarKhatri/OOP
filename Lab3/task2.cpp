// task2.cpp CPP program to overload unary ++ for postfix and prefix increment operation on complex numbers using non-member/friend function

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
	friend complex operator ++(complex &);
	friend complex operator ++(complex &, int);
};

complex operator ++(complex& c)
{
	complex c1;
	c1.r = ++c.r;
	c1.i = ++c.i;
	return c1;
}

complex operator ++(complex& c, int)
{
	complex c1;
	c1.r = c.r++;
	c1.i = c.i++;
	return c1;
}

int main()
{
	complex c1, c2(1.1, 2.1), c3(3, 4), c4, c5;
	c1++;
	c2 = ++c1;
	c4 = c3++;
	c3 = ++c2;
	c1.display_complex();
	c2.display_complex();
	c3.display_complex();
	c4.display_complex();
	return 0;
}