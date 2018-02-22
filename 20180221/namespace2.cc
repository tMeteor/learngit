 ///
 /// @file    namespace2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-21 20:23:37
 ///
 
#include <iostream>

namespace A
{
void displayA()
{
	std::cout<< "displayA()"<< std::endl;
}
}
using namespace A;
int cout(int a)
{
	return 1;
}

int main(void)
{
	displayA();

	cout(1);
	return 0;
}
