 ///
 /// @file    point.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-22 22:46:31
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
public:
	//当有了一个有参构造函数之后，编译器就不会再提供默认构造函数
	Point(int ix=0,int iy=0)
	:_ix(ix)
	,_iy(iy)//初始化表达式
	{
		cout << "Point(int,int)---" << endl;
	}
	
	Point(const Point & rhs)
	:_ix(rhs._ix)
	,_iy(rhs._iy)
	{
		cout << "Point(const Point &)" << endl;
	}
	~Point()
	{
		cout << "~Point()" << endl;
	}
	void print()
	{
		cout << "(" << _ix
			<< "," << _iy
			<< ")" << endl;
	}
private:
	int _ix;
	int _iy;
};

void func1(Point pt)
{
	cout << "func1(Point)" << endl;
	pt.print();
}

Point func2()
{
	cout << "func2()" << endl;
	Point pt(5,6);
	pt.print();

	return pt;
}

int test(void)
{
	Point pt1(1,2);
	pt1.print();

	Point pt2 =pt1;//调用复制构造函数
	pt2.print();

	Point pt3=func2();

	return 0;
}
void test2(void)
{
	const int & ref=10;//又值
	Point(10,11).print();//匿名对象，又称为又值

	const Point &ref = Point(12,13);//只有const引用能够绑定匿名对象
	cout << "-------------" << endl;
}
int main(void)
{
	test2();
	return 0;
}

