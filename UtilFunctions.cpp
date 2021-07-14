#include "UtilFunctions.h"
#include "BaseUtil.h"
#include "SmplIntr.h"
#include "CmpndIntr.h"
#include "EMIUtil.h"
#include "PerformanceUtil.h"
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
            case 2:
                CppAdvConceptMenu();
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
        cout<<"4. EMI calculation"<<endl;
        cin>>lpIdx;
        switch(lpIdx)
        {
            case 1: exit(0);
            case 2:
            {
                auto utl = new SmplIntr();
                utl->Start_util();
                break;
            }
            case 3:
            {
                auto utl = new CmpndIntr();
                utl->Start_util();
                break;
            }
            case 4:
            {
                auto utl = new EMIUtil();
                utl->Start_util();
                break;
            }
            default:
                break;
        }
    }
}

void UtilFunctions::CppAdvConceptMenu()
{
    cout<<"\n The Advance CPP concept" << endl;
    int lpIdx = 1;
    while(lpIdx)
    {
        cout<<"\n\n\n **********Advance CPP Concepts Options**********"<<endl;
        cout<<"1.Performance \t"<<"0.exit"<<endl;
        cin>>lpIdx;
        switch(lpIdx)
        {
            case 0:exit(0);
            case 1:

                {
                    auto obj = new PerformanceUtil();
                    obj->Start_util();
                    break;
                }
            default:
                break;

        }
        lpIdx++;
    }
}