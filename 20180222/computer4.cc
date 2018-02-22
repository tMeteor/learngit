 ///
 /// @file    computer2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-22 20:39:31
 ///
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

class Computer
{
public:
	Computer(const char *brand,float price)
//	:_brand(brand)//浅拷贝
	:_brand(new char[strlen(brand)+1]())//深拷贝
	,_price(price)
	{
		cout << "-------Computer(const char *,float)-------" << endl;
		strcpy(_brand,brand);
	}

	Computer(const Computer & rhs)
	:_brand(new char[strlen(rhs._brand)+1]())
	,_price(rhs._price)
	{
		cout << "---------Computer(const Computer&)" << endl;
		strcpy(_brand,rhs._brand);
	}

	~Computer()
	{
		cout << "~Computer()" << endl;
		delete [] _brand;
		_brand=NULL;
	}
	void print();
	void setBrand(const char *brand);
	void setPrice(float price);

private:
	char *_brand;
	float _price;
};

void print()
{
	cout << "print()" << endl;
}
//在类之外实现成员函数
void Computer::print()
{
	cout << "品牌:" << _brand <<endl;
	cout << "价格:" << _price << endl;
}
void Computer::setBrand(const char *brand)
{
	strcpy(_brand,brand);
}

void Computer::setPrice(float price)
{
	_price=price;
}

//全局对象
//Computer pc2("thinkpad",6666);

int main(void)
{

	char brand[]="xiaomi";
	Computer com(brand,1999);//栈对象
	com.print();
//	com.~Computer();//可以不用显示

	Computer com2=com;
	com2.print();
	return 0;
}
