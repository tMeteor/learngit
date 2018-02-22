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
	
	Computer & operator =(const Computer & rhs)
	{
		cout << "Computer & operator =(const Computer & rhs)-------" << endl;
		if(this!=&rhs)//判断是否是自复制
		{
			delete[] _brand;//回收做操作数指针原来的空间
			this->_brand=new char[strlen(rhs._brand)+1]();//深拷贝
			strcpy (_brand,rhs._brand);
			_price = rhs._price;
		}
		return *this;
	}

	~Computer()
	{
		cout << "~Computer()" << endl;
		delete [] _brand;
	}
	void print();

private:
	char *_brand;
	float _price;
};

//每一个成员函数的第一个参数就是this指针
void Computer::print()
{
	cout << "品牌:" << this->_brand << endl;
	cout << "价格:" << this->_price << endl;
}

//全局对象
//Computer pc2("thinkpad",6666);

//int test(void)
//{
//	char brand[]="xiaomi";
//	Computer com(brand,4999);
//	com.print();
//
//	Computer com2=com;
//	com2.print();
//	return 0;
//}
void test1(void)
{
	Computer pc1("xiaomi",4999);
	pc1.print();

	Computer pc2("Mac",10000);
	pc2.print();

	pc2=pc1;//这里的pc2对象已经创建完毕
	pc2.print();

	pc2=pc2;
}

int main(void)
{

	test1();
	return 0;
}
