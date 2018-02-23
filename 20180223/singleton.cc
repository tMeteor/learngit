 ///
 /// @file    singleton.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-23 15:50:42
 ///
#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;

//单例模式要求：通过该类只能产生唯一的对象
//该对象是一个堆对象
//
//使用场景：
//1.读取配置文件
//2.词典类
//3.日志系统
//4.能使用全局变量的地方都可以换成用单例模式来完成

class Singleton
{
public:
	static Singleton *getlnstance()
	{
		if(NULL == _plnstance)
		{
			_plnstance = new Singleton;
		}
		return _plnstance;
	}


private:
	Singleton()
	{
	
	}
	static Singleton *_plnstance;
};

Singleton * Singleton::_plnstance=NULL;


int main(void )
{
	//Singleton s1;//编译出错
	//singleton s2;
	
	//Singleton *p1= new Singleton;//编译出错
	//Singleton *p2= new Singleton;
	Singleton *p1 = Singleton::getlnstance();
	Singleton *p2 = Singleton::getlnstance();
	Singleton *p3 = Singleton::getlnstance();

	printf("p1 = %p\n",p1);
	printf("p2 = %p\n",p2);
	printf("p3 = %p\n",p3);

	return 0;
}

