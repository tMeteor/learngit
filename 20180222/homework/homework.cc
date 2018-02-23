///
/// @file    homework.cc
/// @author  lemon(haohb13@gmail.com)
/// @date    2018-02-23 16:08:21
///
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;
class String
{
	public:
		String()
		{
		
		}
		String(const char *pstr)
		:_pstr(new char[strlen(pstr)+1]())
		{
//			cout << "111111111" << endl;
			strcpy(_pstr,pstr);
		}
		String(const String & rhs)
		:_pstr(new char[strlen(rhs._pstr)+1]())
		{
//			cout << "2222222222" << endl;
			strcpy(_pstr,rhs._pstr);
		}
		String & operator=(const String & rhs)
		{
//			cout << "3333333333" << endl;
			if(this!=&rhs)
			{
				delete []_pstr;
				this->_pstr=new char[strlen(rhs._pstr)+1]();
				strcpy(_pstr,rhs._pstr);
			}
			return *this;
		}
		~String()
		{
//			cout << "--------" << endl;
//			delete []_pstr;
		}

		void print();
		

	private:
		char * _pstr;
};
void String::print()
{
	cout << "字符串:" << this->_pstr <<endl;
}
int main(void)
{
	String str1;
	str1.print();

	String str2 = "Hello,world";
	String str3("wangdao");

	str2.print();		
	str3.print();	

	String str4 = str3;
	str4.print();

	str4 = str2;
	str4.print();

	return 0;
}
