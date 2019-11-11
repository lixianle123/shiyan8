#include<string>
#include<Windows.h>
#include <iostream>
using namespace std;
class student
{
	int age;
	char *name;
public:
	student(int m, char *n)
	{
		age = m;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	friend void disp(student&);
	~student()
	{
		cout << "delete it." << name << endl;
		delete [ ]name;
	}
};
void disp(student & p)
{
	cout << "student's name is " << p.name << ",age is " << "p.age" << endl;
}
int main()
{
	student A( 18, "wujiang");
	student B( 19, "xiayu");
	disp(A);
	disp(B);
	system("pause");
	return 0;
}