 ///
 /// @file    memory.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-22 20:14:18
 ///
 
#include <iostream>
#include <stdio.h>
using std::cout;
using std::endl;

int a=1;
char *p1;

const int d=100;

int test(void)
{
	int b;
	char s[]="123456";
	char *p2;
	const char *p3="1234";
	const int e =10;
	static int c=1;
	p1=new char[10];
	p2=new char[20];
	
	printf("&a =%p\n",&a);
	printf("&p1=%p\n",&p1);
	printf("p1=%p\n",p1);
	printf("&b=%p\n",&b);
	printf("&p2=%p\n",&p2);
	printf("s=%p\n",s);
	printf("p2=%p\n",p2);
	printf("p3=%p\n",p3);
	printf("&p3=%p\n",&p3);
	printf("&c=%p\n",&c);
	printf("&test=%p\n",test);
	printf("&d=%p\n",&d);
	printf("&e=%p\n",&e);

	return 0;
}
int main(void)
{
	test();
	return 0;
}
