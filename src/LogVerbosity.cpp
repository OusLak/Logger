#include "../inc/LogVerbosity.h"


using namespace std;


string LogVerbosity::LogTime(time_t intitial){

	char* dt = ctime(&intitial);

	return dt;
}


void LogVerbosity::LogInTerminal(string msg){

    cout << "\033[1;34mVerbosity:\033[0m" << "[" << msg << "]  " << LogTime(time(0)) << endl;
}

void LogVerbosity::LogInFile(string msg){

    ofstream logwriter("log.txt", ios::app);

    if(logwriter){

        logwriter << "Verbosity: [" << msg << "]" << endl;
        logwriter << LogTime(time(0)) << endl;
    }

    else{

        cout << "ERROR: Impossible to open the file: log.txt" << endl;
    }

}

void LogVerbosity::LogInServer(string msg){

    
  try
    {

      ClientSocket client_socket ( "localhost", 30000 );

      string reply;

      try
    {
      client_socket << msg << " " << LogTime(time(0));
      client_socket >> reply;
    }
      catch ( SocketException& ) {}

      cout << "LogVerbosity was sent to the server:\n";

    }
  catch ( SocketException& e )
    {
      cout << "Exception was caught:" << e.description() << "\n";
    }
	

}