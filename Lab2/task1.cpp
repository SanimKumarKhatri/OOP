//task1 CPP program to input the name, roll, marks and address of student from the user and
//display the entered details using the concept of class and objects.
#include <iostream>

using namespace std;

class student
{
	char name[20], address[50], Roll[10];
	float marks;
public:
	void get_detail()
	{
		cout << "Name: ";
		cin >> name;
		cout << "Address: ";
		cin >> address;
		cout << "Roll: ";
		cin >> Roll;
		cout << "Marks: ";
		cin >> marks;
		system("cls");
	}
	void display_detail()
	{
		cout << name <<"\t"<< address <<"\t"<< Roll <<"\t"<< marks;
	}
};

int main()
{
	student s;
	s.get_detail();
	cout << "name\taddress\troll\tmarks" << endl;
	s.display_detail();
	return 0;
}
