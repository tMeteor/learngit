 ///
 /// @file    enmpty.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-23 14:31:51
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Empty
{};

int main(void)
{
	Empty e1;
	Empty e2;
	cout << sizeof(Empty) <<endl;

	return 0;
}
