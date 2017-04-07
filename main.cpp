#include <iostream>
#include <string>

#include "inc/Logger.h"
#include "inc/LogError.h"
#include "inc/LogWarning.h"
#include "inc/LogVerbosity.h"

using namespace std;
 
int main()
{

	string Name;
	string Stop("n");

	LogError intel;
   	//intel.LogInServer("Error!Error!Error");
   	LogWarning intel2;
   	//intel2.LogInTerminal("Warning!Warning!Warning");
   	LogVerbosity intel3;
   	//intel3.LogInFile("Verbosity!Verbosity!Verbosity");

   	cout << "----------------------------------------------------------\n";
   	cout << "ODC: Restricted access authorized personnel only!!!\n\n";
   	cout << "What's your Name: \n";
   	cout << "PS: Imed, Chokri, Mohamed are authorized\n";
   	cout << "    Oussama, Maher, Mazen are authorized to enter with a companion\n";



   	do {

   	cout << "Your Name: ";
   	getline(cin, Name);
   	//cin >> Name;

   	if ((Name == "Imed") || (Name == "Chokri") || (Name == "Mohamed")){

   		intel3.LogInFile("authorized personnel"); // You can change output mode: LogInTerminal or LogInServer

   	}

   	else if ((Name == "Oussama") || (Name == "Maher") || (Name == "Mazen")){

   		intel2.LogInTerminal("require a companion to enter!!"); // You can change output mode: LogInFile or LogInServer

   	}

   	else intel.LogInServer("unauthorized personnel !!"); // You can change output mode: LogInFile or LogFile


   	cout << "Wanna try agian ? (y/n): ";
   	getline(cin, Stop);
   	//cin >> Stop;

   	cout << "----------------------------------------------------------\n";

   	} while (Stop == "y");



    return 0;
}


