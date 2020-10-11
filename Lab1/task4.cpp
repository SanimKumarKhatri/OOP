//task4 cpp program to illustrate concept of inline function
#include <iostream>

using namespace std;
inline float volume(float a)
{
    return a * a * a;
}
int main()
{
    float l;
    cout << "enter the lenght of cube: ";
    cin >> l;
    cout << "volume of cube is: " << volume(l) << endl;
    return 0;
}
