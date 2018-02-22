 ///
 /// @file    namespace1.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-21 20:16:26
 ///
 
#include <iostream>
using namespace std;
namespace A
{
void displayA()
{
	cout << "displayA()" << endl;
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
