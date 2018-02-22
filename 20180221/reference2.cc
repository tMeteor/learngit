 ///
 /// @file    reference2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-21 21:41:04
 ///
 
#include <iostream>
using std::cout;
using std::endl;

//作为函数的返回值
int arr[5]={1,2,3,4,5};

//如果这里直接返回int型数据，return时是要进行复制的
int func()
{
	return arr[0];
}
//如果返回值是引用，return时不会进行复制
int & func2()
{
	return arr[0];
}
//不要返回一个局部变量的引用
int &func3()
{
	int a=10;
	return a;
}
int *func4()
{
	int a=10;
	return &a;
}

int main()
{
	func2()=10;
	cout << "arr[0]=" << arr[0]<< endl;


	int &refa=func3();
	cout << "refa="<< refa<< endl;

	return 0;
}
