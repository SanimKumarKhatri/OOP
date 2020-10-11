//task2 CPP program to input the name, roll, marks and address of n students from the user and
//display the entered details using the concept of class and objects.

#include <iostream>

using namespace std;

class student
{
    char name[20], address[50], roll[10];
    float marks;
public:
	void get_detail()
	{
		cout << "Name: ";
		cin >> name;
		cout << "Address: ";
		cin >> address;
		cout << "Roll: ";
		cin >> roll;
		cout << "Marks: ";
		cin >> marks;
		system("cls");
	}
	void display_detail()
	{
		cout << name << "\t" << address << "\t" << roll << "\t" << marks << endl;
	}
};

int main()
{
	student s[50];
	int n, i;
	cout << "Enter the number of students: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i+1 << endl;
		s[i].get_detail();
	}
	cout << "name\taddress\troll\tmarks" << endl;
	for (int i = 0; i < n; i++)
	{
		s[i].display_detail();
	}
	return 0;
}