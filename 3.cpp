#include <Windows.h>
#include<string>
#include<math.h>
#include <iostream>
using namespace std;
class point     //����һ���������
{
		int x, y;    //x,y����
public:
 	point()     //�޲ι��캯��
	 	{
	 		x = y = 0;
		}
 	point(int a, int b)  //�вι��캯��
		{
	 		x = a;
			y = b;
		}
	point(const point& r)   //��������
	 	{
			x = r.x;
			y = r.y;
		}
	~point()              //��������
	 	{
	 		cout << "�������������" << endl;
		}
    int Getx();//��ȡ������
    int Gety();//��ȡ������
    void Setx(int ax);//�޸ĺ�����
    void Sety(int by);//�޸�������
 	void SwapAxis(int &xa, int &xb);//��������ֵ
 	friend double Getlength(point& A, point& B);//��Ԫ����������������
 };

int point::Getx()//��ȡ������
 {
	return x;
 }
int point::Gety()//��ȡ������
 {
 	return y;
 }
void point::Setx(int ax)//�޸ĺ�����
{
 	this->x = ax;
 }
void point::Sety(int by)//�޸�������
{
 	this->x = by;
 }
void point::SwapAxis(int *xa, int *xb)//��������ֵ
{
 	int t;
 	t = xa;
 	xa = xb;
 	xb = t;
 	cout << "������ĺ�����Ϊ" << xa << "���������������Ϊ" << xb << endl;
 }
cout << "A��B�����ľ���Ϊ" << getlength(A, B) << endl;

double Getlength(point& A, point& B)//��������
{
	cout << sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y)) << endl;
	return sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y));
 }
int main()
{
 	point A(3, 2), B(7, 9);
 	cout << "��A�ĺ����꣺" << A.Getx() << endl;
 	cout << "��A�������꣺" << A.Gety() << endl;
 	cout << "��B�ĺ����꣺" << B.Getx() << endl;
 	cout << "��B�������꣺" << B.Gety() << endl;
 	cout << "A��B�����ľ���Ϊ" << Getlength(A, B) << endl;
 	int x = 3, y = 2;
 	A.SwapAxis(x, y);
	system("pause");
	return 0;
 }
