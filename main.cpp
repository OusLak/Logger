#include <iostream>
#include <string>

#include "inc/Logger.h"
#include "inc/LogError.h"
#include "inc/LogWarning.h"
#include "inc/LogVerbosity.h"

using namespace std;
 
int main()
{

	string x("first attempt");

	LogError intel;

   	intel.LogInServer(x);

   

    return 0;
}


