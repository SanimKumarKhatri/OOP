//task5 cpp program to illustrate concept of default argument
#include<iostream>

using namespace std;

int sum(int a, int b = 0, int c = 0, int d = 0, int e = 0, int f = 0, int g = 0, int h = 0)
{
	return a + b + c + d + e + f + g + h;
}

int main()
{
	int a, b, c, d, e, f, g, h;
	cout << "Enter 8 numbers: ";
	cin >> a >> b >> c >> d >> e >> f >> g >> h;
	cout << sum(a) << endl;
	cout << sum(a, b) << endl;
	cout << sum(a, b, c) << endl;
	cout << sum(a, b, c, d) << endl;
	cout << sum(a, b, c, d, e) << endl;
	cout << sum(a, b, c, d, e, f) << endl;
	cout << sum(a, b, c, d, e, f, g) << endl;
	cout << sum(a, b, c, d, e, f, g, h) << endl;
	return 0;
}
