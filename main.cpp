#include<iostream>
//#include <stdio.h>
#include "UtilFunctions.h"
using namespace std;

int main()
{
    int loopIndex = 1;
    
    while(loopIndex != 0)
    {
       loopIndex = UtilFunctions::GetMainMenuIndex();
    }
    

    return 0;
}

