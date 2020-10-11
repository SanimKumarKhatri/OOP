//task4 CPP program to illustrate the concept of constructor(default, parameterized and copy
//constructor) and destructor taking class complex as an example.
#include<iostream>

using namespace std;

class complex
{
	float real, imaginary;
public:
	//default constructor
	complex()
	{
		real = 0;
		imaginary = 0;
	}
	//parameterized constructor
	complex(float a, float b)
	{
		real = a;
		imaginary = b;
	}
	//copy constructor
	complex(complex &c1)	
	{
		real = c1.real;
		imaginary = c1.imaginary;
	}
	//destructor
	~complex()
	{
		cout << "inside destructor!Object destroyed!" << endl;
		cout << "inside destructor!Object destroyed!" << endl;
	}
	void show_complex()
	{
		cout << real << "+i" << imaginary << endl;
	}
};

int main()
{
	complex c1, c2(1.2, 4), c3(c2);
	c1.show_complex();
	c2.show_complex();
	c3.show_complex();
	return 0;
}