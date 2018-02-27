 ///
 /// @file    testMlog.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-26 15:39:17
 ///
 
#include "mylog.h"

int test0(void)
{
	Mylog::getInstance()->info("this is an info message");
	Mylog::getInstance()->error("this is an error message");
	Mylog::getInstance()->warn("this is a warn message");
	Mylog::getInstance()->debug("this is a debug message");
	
	return 0;
}

void test1(void)
{
	cout << __FILE__ << endl;
	cout << __LINE__ << endl;
	cout << __FUNCTION__ << endl;
	cout << __func__ << endl;
}

void test2(void)
{
	logInfo(prefix("this is an info Message"));
	
	logError(prefix("this is an error Message"));
	logWarn(prefix("this is a warn Message"));
	logDebug(prefix("this is a debug Message"));
}

void test3(void)
{
	LogInfo("this is an info Message");
	LogError("this is an error Message");
	LogWarn("this is a warn Message");
	LogDebug("this is a debug Message");
}

int main(void)
{
//	test1();
//	test2();
	test3();
	return 0;
}
