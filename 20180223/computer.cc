 ///
 /// @file    computer.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-23 15:12:17
 ///
 
#include <iostream>
#include <string.h>
using std::cout;
using std::endl;

class Computer
{
public:
	Computer(const char * brand,float price)
	:_brand(new char[strlen(brand)+1]())
	,_price(price)
	{
		cout << "Computer(const char *,float)----" << endl;
		strcpy(_brand,brand);
		_totalPrice +=_price;
	}

	void print()
	{
		cout << "品牌:" << _brand << endl;
		cout << "价格:" << _price << endl;
	}
	void printTotalPrice()
	{
		cout << "总价:" << _totalPrice << endl;
	}
	~Computer()
	{
		cout << "~Computer()" << endl;
		_totalPrice-=_price;
	}
private:
	char *_brand;
	double _price;
	static double _totalPrice;
};
//必须要类之外进行初始化，被该类的所有对象所共享
double Computer::_totalPrice=0;

int main(void)
{
	Computer pc1("xaiomi",5000);
	pc1.printTotalPrice();

	Computer pc2("thinkpad",6000);
	pc2.printTotalPrice();

	Computer pc3("mac",10000);
	pc3.printTotalPrice();
	cout << "-------------"<< endl;
	pc3.~Computer();
	pc3.printTotalPrice();
	//静态数据成员位于全局/静态区，不占据对象的存储空间
	cout << "sizeof(Computer)=" << sizeof(Computer) << endl;

	return 0;
}

