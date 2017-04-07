#include "../inc/LogWarning.h"


using namespace std;


string LogWarning::LogTime(time_t intitial){

	char* dt = ctime(&intitial);

	return dt;
} 


void LogWarning::LogInTerminal(string msg){

    cout << "\033[1;35mWarning:\033[0m" << "[" << msg << "]  " << LogTime(time(0)) << endl;
}

void LogWarning::LogInFile(string msg){

    ofstream logwriter("log.txt", ios::app);

    if(logwriter){

        logwriter << "Warning: [" << msg << "]" << endl;
        logwriter << LogTime(time(0)) << endl;
    }

    else{

        cout << "ERROR: Impossible to open the file: log.txt" << endl;
    }

}

void LogWarning::LogInServer(string msg){

    
  try
    {

      ClientSocket client_socket ( "localhost", 30000 );

      std::string reply;

      try
    {
      client_socket << msg << " " << LogTime(time(0));
      client_socket >> reply;
    }
      catch ( SocketException& ) {}

      std::cout << "LogWarning was sent to the server:\n";

    }
  catch ( SocketException& e )
    {
      std::cout << "Exception was caught:" << e.description() << "\n";
    }



}