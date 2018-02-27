 ///
 /// @file    log4cpp1.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-25 20:45:27
 ///
#include <log4cpp/Category.hh>
#include <log4cpp/BasicLayout.hh>
#include <log4cpp/Priority.hh>
#include <log4cpp/OstreamAppender.hh>
#include <iostream>
using std::cout;
using std::endl;

int main(void )
{
	//Appender 代表的是日志输出得到目的地
	log4cpp::Appender * ostreamAppender = new log4cpp::OstreamAppender("cout",&cout);
	//BasicLayout 设置的日志的布局
	ostreamAppender->setLayout(new log4cpp::BasicLayout());
	
	//Category 执行日志的输出
	log4cpp::Category & root = log4cpp::Category::getRoot();
	root.setAppender(ostreamAppender);
	root.setPriority(log4cpp::Priority::INFO);//设置的是Catagory对象的优先级
	//当前优先级的值越小代表级别越高
	
	//只有当一条日志的优先级大于等于Catagory的优先级时，该日志才会被记录；否则忽略
	
	root.warn("this is a warn message");
	root.error("this is a erron meseage");
	root.info("this is an info meseage");

	return 0;
}

