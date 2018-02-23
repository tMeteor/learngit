 ///
 /// @file    point3.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-23 14:42:29
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
public:
	Point(int ix,int iy)
	:_ix(ix)
	,_iy(iy) 
	{
	}
//const成员函数，不能修改数据成员，不能调用非const成员函数
	void print(/*const Point * const this*/)const
	{
		cout << "--------Point::print() const" << endl;
		cout << "(" << _ix
			<< "," << _iy
			<< ")" <<endl;
		
	}

#if 1
	//非const函数
	void print()
	{
		cout << "Point::print()------" << endl;
		cout << "(" << _ix
			<< "," << _iy
			<< ")" <<endl;
	}
#endif

private:
	int _ix;
	int _iy;
};
int main(void )
{
	const Point pt(1,2);//const对象只能调用const成员函数
	pt.print();
	cout << "-------------" << endl;
	Point pt2(3,4);//非const对象都可以调用，当2钟都出现时，会调用const版本成员函数
	pt2.print();

	return 0;
}
