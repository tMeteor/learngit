 ///
 /// @file    mylog.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-26 15:08:51
 ///
 
#include "mylog.h"

Mylog * Mylog::_pInstance = NULL;

Mylog * Mylog::getInstance()
{
	if(NULL== _pInstance)
		_pInstance = new Mylog();
	return _pInstance;
}

Mylog::Mylog()
:_cat(log4cpp::Category::getRoot())
{
	//日志输出目的地
	log4cpp::Appender * ostreamAppender = new log4cpp::OstreamAppender("cout",&cout);

	log4cpp::Appender * fileAppender = new log4cpp::FileAppender("fileAppender","wwangdao.log");

	//日志布局
	log4cpp::PatternLayout * ptnLyt = new log4cpp::PatternLayout();
	ptnLyt->setConversionPattern("%d[%p]%c:%m%n");
	ostreamAppender->setLayout(ptnLyt);
	log4cpp::PatternLayout * ptnLyt2 = new log4cpp::PatternLayout();
	ptnLyt2->setConversionPattern("%d[%p]%c:%m%n");
	fileAppender->setLayout(ptnLyt2);

	//category执行日志的输出
	log4cpp::Category & _cat = log4cpp::Category::getRoot();
	_cat.addAppender(ostreamAppender);
	_cat.addAppender(fileAppender);
	_cat.setPriority(log4cpp::Priority::DEBUG);
}

Mylog::~Mylog()
{
	log4cpp::Category::shutdown();
}

void Mylog::destroy()
{
	if(_pInstance)
		delete _pInstance;
}

void Mylog::info(const char * msg)
{
	_cat.info(msg);
}

void Mylog::error(const char * msg)
{
	_cat.error(msg);
}

void Mylog::warn(const char * msg)
{
	_cat.warn(msg);
}

void Mylog::debug(const char * msg)
{
	_cat.debug(msg);
}

void logInfo(const char * msg)
{
	Mylog::getInstance()->info(msg);
}

void logError(const char * msg)
{
	Mylog::getInstance()->error(msg);
}

void logWarn(const char * msg)
{
	Mylog::getInstance()->warn(msg);
}

void logDebug(const char * msg)
{
	Mylog::getInstance()->debug(msg);
}
