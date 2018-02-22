 ///
 /// @file    const.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-21 22:17:44
 ///
 
#include <iostream>
using std::cout;
using std::endl;

//宏定义发生的时机是在预处理，只是进行简单的字符替换，没有进行类型检查
//const修饰的变量，发生时机是在编译时，具有检查的功能
#define kMax 100

int main()
{
	cout << "kMax =" << kMax << endl;
	const int a=10;
	cout << "a="<< a <<endl;
	return 0;
}
