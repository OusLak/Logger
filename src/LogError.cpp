#include "LogError.h"


using namespace std;


string LogError::LogTime(time_t intitial){

    char* dt = ctime(&intitial);

    return dt;
}


void LogError::LogInTerminal(string msg){

    cout << "\033[1;31mERROR:\033[0m" << "[" << msg << "]  " << LogTime(time(0)) << endl;
}

void LogError::LogInFile(string msg){

    ofstream logwriter("log.txt", ios::app);

    if(logwriter){

        logwriter << "ERROR: [" << msg << "]" << endl;
        logwriter << LogTime(time(0)) << endl;
    }

    else{

        cout << "ERROR: Impossible to open the file: log.txt" << endl;
    }

}

void LogError::LogInServer(string msg){

    
  try
    {

      ClientSocket client_socket ( "localhost", 30000 );

      string reply;

      try
    {
      client_socket << msg << LogTime(time(0));
      client_socket >> reply;
    }
      catch ( SocketException& ) {}

      cout << "LogError was sent to the server\n";

    }
  catch ( SocketException& e )
    {
      cout << "Exception was caught:" << e.description() << "\n";
    }
	

}
