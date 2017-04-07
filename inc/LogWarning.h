#ifndef DEF_LOGWARNING
#define DEF_LOGWARNING

#include <iostream>
#include <string>
#include "Logger.h"


class LogWarning : public Logger{
    public:

    	std::string LogTime(std::time_t intitial);
    	void LogInTerminal(std::string msg);
        void LogInFile(std::string msg);
        void LogInServer(std::string msg);

    
};

#endif