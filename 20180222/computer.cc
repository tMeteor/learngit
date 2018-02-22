 ///
 /// @file    computer.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-22 20:32:15
 ///
 
#include <iostream>
#include <string.h>
using std::cout;
using std::endl;

class Computer
{
public:
	void print()
	{
		cout << "品牌:" << _brand << endl;
		cout << "价格:" << _price << endl;
	}
	void setBrand(const char * brand)
	{
		strcpy(_brand,brand);
	}
	void setPrice(float price)
	{
		_price=price;
	}
private:
	char _brand[20];
	float _price;
};

int main(void)
{
	int a;

	Computer com;
	com.setBrand("xiaomi");
	com.setPrice(4000);
	com.print();

	return 0;
}
