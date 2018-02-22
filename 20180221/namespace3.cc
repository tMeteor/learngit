 ///
 /// @file    namespace3.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-21 20:27:34
 ///
 
#include <iostream>
using std::cout;
using std::endl;

namespace A
{
void displayA()
{
	cout << "displayA()" << endl;
}

//命名空间的嵌套
namespace B
{
void displayB()
{
	cout << "displayB()" << endl;
}
}//end of namespace B
}//end of namespace A
int main()
{
	A::displayA();
	A::B::displayB();

	return 0;
}
