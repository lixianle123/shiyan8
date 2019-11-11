#include <Windows.h>
#include<string>
#include<math.h>
#include <iostream>
using namespace std;
class point     //定义一个坐标点类
{
		int x, y;    //x,y坐标
public:
 	point()     //无参构造函数
	 	{
	 		x = y = 0;
		}
 	point(int a, int b)  //有参构造函数
		{
	 		x = a;
			y = b;
		}
	point(const point& r)   //拷贝函数
	 	{
			x = r.x;
			y = r.y;
		}
	~point()              //析构函数
	 	{
	 		cout << "已完成析构函数" << endl;
		}
    int Getx();//提取横坐标
    int Gety();//提取纵坐标
    void Setx(int ax);//修改横坐标
    void Sety(int by);//修改纵坐标
 	void SwapAxis(int &xa, int &xb);//交换坐标值
 	friend double Getlength(point& A, point& B);//友元函数计算两点间距离
 };

int point::Getx()//提取横坐标
 {
	return x;
 }
int point::Gety()//提取纵坐标
 {
 	return y;
 }
void point::Setx(int ax)//修改横坐标
{
 	this->x = ax;
 }
void point::Sety(int by)//修改纵坐标
{
 	this->x = by;
 }
void point::SwapAxis(int *xa, int *xb)//交换坐标值
{
 	int t;
 	t = xa;
 	xa = xb;
 	xb = t;
 	cout << "交换后的横坐标为" << xa << "，交换后的纵坐标为" << xb << endl;
 }
cout << "A、B两点间的距离为" << getlength(A, B) << endl;

double Getlength(point& A, point& B)//两点间距离
{
	cout << sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y)) << endl;
	return sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y));
 }
int main()
{
 	point A(3, 2), B(7, 9);
 	cout << "点A的横坐标：" << A.Getx() << endl;
 	cout << "点A的纵坐标：" << A.Gety() << endl;
 	cout << "点B的横坐标：" << B.Getx() << endl;
 	cout << "点B的纵坐标：" << B.Gety() << endl;
 	cout << "A、B两点间的距离为" << Getlength(A, B) << endl;
 	int x = 3, y = 2;
 	A.SwapAxis(x, y);
	system("pause");
	return 0;
 }
