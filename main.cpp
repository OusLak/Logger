#include <iostream>
#include <string>

#include "Logger.h"
#include "LogError.h"
#include "LogWarning.h"
#include "LogVerbosity.h"

using namespace std;
 
int main()
{

	string x("first attempt");

	LogError intel;

   	intel.LogInServer(x);

   

    return 0;
}


