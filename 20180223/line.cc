 ///
 /// @file    line.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-23 15:00:40
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
public:
	Point()
	:_ix(0)
	,_iy(0)
	{
		cout << "--------Point ()" << endl;
	}
	Point(int ix,int iy)
	:_ix(ix)
	,_iy(iy)
	{
		cout << "Point (int ,int)----------" << endl;
	}
	void print()
	{
		cout << "(" << _ix
			<< "," << _iy
			<< ")";
	}
private:
	int _ix;
	int _iy;
};

class Line
{
public:
	Line(int x1,int y1,int x2,int y2)
	:p1(x1,y1)
	,p2(x2,y2) 
	{
		cout << "Line (int ,int ,int ,int )" << endl;
	}
	void printLine()
	{
		p1.print();
		cout << "---->" ;
		p2.print();
		cout << endl;
	}
private:
	Point p1;
	Point p2;
};

int main(void)
{
	Line line(1,2,3,4);
	line.printLine();
	return 0;
}

