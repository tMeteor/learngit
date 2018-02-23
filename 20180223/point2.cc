 ///
 /// @file    point.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-23 14:33:57
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
public:
	Point(int ix,int iy,int & ref)
	:_ix(ix)//const数据成员只能在初始化列表之中进行初始化
	,_iy(iy)
	,_ref(ref)
	{
//		_ix=ix;
//		_iy=iy;
	}
private:
    int _ix;
	int _iy;
	int &_ref;
};

int main(void)
{
	int a=10;
	Point pt(1,2,a);
	return 0;
}
