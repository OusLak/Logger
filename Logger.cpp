#include "Logger.h"


using namespace std;

Logger::Logger(){

}



void Logger::LogInTerminal(string msg){

    cout << msg << endl;
}

void Logger::LogInFile(string msg){

    ofstream logwriter("log.txt", ios::app);

    if(logwriter){

        logwriter << msg << endl;
       
    }

    else{

        cout << "ERROR: Impossible to open the file: log.txt" << endl;
    }

}

void Logger::LogInServer(string msg){

  try
    {

      ClientSocket client_socket ( "localhost", 30000 );

      string reply;

      try
	{
	  client_socket << msg;
	  client_socket >> reply;
	}
      catch ( SocketException& ) {}

      cout << "We received this response from the server:\n\"" << reply << "\"\n";;

    }
  catch ( SocketException& e )
    {
      cout << "Exception was caught:" << e.description() << "\n";
    }


    

}