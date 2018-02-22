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
	{
		cout << "Point(int,int)---" << endl;
		_ix=ix;
		_iy=iy;
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

int main(void)
{
	Point pt;
	pt.print();

	Point pt2(1,2);
	pt2.print();

	Point pt3(3);
	pt3.print();

	return 0;
}

