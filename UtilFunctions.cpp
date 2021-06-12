#include "UtilFunctions.h"
#include<iostream>
using namespace std;
int UtilFunctions::GetMainMenuIndex()
{

    std::cout<<"I man being called in as sample4"<< std::endl;
    int lpindx = 1;
    while(lpindx)
    {
        lpindx = 0;
        std::cout<<"******Please Select the Option*******"<< endl;
        cout<< "1. Util Function\t"<<"2.Advance CPP concept.\n"<<"0. Exit.\n";
        cin>>lpindx;
        switch(lpindx)
        {
            case 1:
                UserDailyUtilsMenu();
                break;
            default:
                break;
        }

    }
    return 0;
}

void UtilFunctions::UserDailyUtilsMenu()
{
    int lpIdx = 1;
    while(lpIdx)
    {
        cout<<"\n\n\n **********User Utils Options**********"<<endl;
        cout<<"0. previous Menu\t"<<"1.exit"<<endl;
        cout<<"2. Simple Interest\t"<<"3.Compounding Interest"<<endl;
        cin>>lpIdx;
    }
}