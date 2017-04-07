#ifndef DEF_LOGGER
#define DEF_LOGGER

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include "ClientSocket.h"
#include "SocketException.h"

class Logger{

    public:

        Logger();
        virtual void LogInTerminal(std::string msg);
        virtual void LogInFile(std::string msg);
        virtual void LogInServer(std::string msg);

    


};

#endif
