 ///
 /// @file    point4.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-22 23:14:59
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
public:
	explicit //指明该函数必须显式调用，禁用隐式转换
	Point(int ix,int iy)
	:_ix(ix)
	,_iy(iy)
	{
		cout << "Point(int ,int)" << endl;
	}
	~Point()
	{
		cout << "~Point()" << endl;
	}
	void print()
	{
		cout << "(" <<_ix
			<< "," << _iy
			<< ")" << endl;
	}
private:
	int _ix;
	int _iy;
};

int main(void)
{
	Point pt(1,2);
	pt.print();

//	Point pt2=10;
//	pt2.print();
	return 0;
}
