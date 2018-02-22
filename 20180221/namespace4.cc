 ///
 /// @file    namespace4.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-21 20:32:09
 ///
 
#include <iostream>
namespace B
{
void displayC();
}
namespace A
{
	int a=100;
	void displayA()
	{
		std::cout << "displayA()"<< std::endl;
		B::displayC();
	}
}
namespace B
{
	void displayB()
	{
		A::displayA();
	}
	void displayC()
	{
		std::cout << "B::displayC()" << std::endl;
	}
}
int main()
{
	A::displayA();
	return 0;
}
