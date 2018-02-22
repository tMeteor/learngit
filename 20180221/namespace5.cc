 ///
 /// @file    namespace5.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-21 20:39:34
 ///
 
#include <iostream>
#include <stdio.h>
#include <cstdio>

using std::cout;
using std::endl;

int a=100;//定义全局变量，它是位于匿名空间的

namespace B
{
	int a=1000;
}

namespace A
{
	int a=10;
	void displayA(int a)
	{
		//using std::cout;//using 声明机制可以尽量放在小范围内使用
		cout << "形参a =" << a << endl;
		cout << "名称空间A中的 a=" << A::a << endl;
		cout << "名称空间B中的 a=" << B::a << endl;
		cout << "全局变量 a=" << ::a << endl;
	}
}//end of namespace A

namespace B
{
	void displayB()
	{
		cout << " displayB()" << endl;
	}
}
int main()
{
	::printf("hello world\n");
	A::displayA(3);
	B::displayB();
	return 0;
}
