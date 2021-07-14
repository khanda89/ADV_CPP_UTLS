#include "BaseUtil.h"
#include "PerformanceUtil.h"
#include<iostream>
#include <chrono>
#include <sys/time.h>
#include <ctime>
#include <string>
#include <bits/stdc++.h>

using std::cout; using std::endl;
using std::chrono::duration_cast;
using std::chrono::milliseconds;
using std::chrono::seconds;
using std::chrono::system_clock;
using namespace std;

void PerformanceUtil::Start_util()
{
    std::cout<<"performance Util" <<endl;
    Input();
    Calculate();
    Display();
}

void PerformanceUtil::Calculate()
{

}
void PerformanceUtil::Display()
{

    auto millisec_since_epoch = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    //auto sec_since_epoch = duration_cast<seconds>(system_clock::now().time_since_epoch()).count();
    int i = 0;
    while(i<50000)
    {
        
        std::string ss = "manoj";
        ss += "kumar";
        ss += "Khanda";
        i++;
    }
    i = 0;
    auto millisec_since_epoch1 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    auto diff = millisec_since_epoch1 - millisec_since_epoch;
    cout<<"diff is "<<diff << endl;
    
    while(i<50000)
    {
        std::stringstream ss;
        ss << "Manoj" << " Kumar" << " Khanda";;
        i++;
    }
    i = 0;
    auto millisec_since_epoch2 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    auto diff1 = millisec_since_epoch2 - millisec_since_epoch1;
    cout<<"diff1 is "<<diff1 << endl;
    
    while(i<50000)
    {
        auto ch = new char[(strlen("Manoj") + strlen(" kumar") + strlen(" khanda") +1)];
        if(ch);
        strcat(ch, "Manoj");
        strcat(ch, "Kumar");
        strcat(ch, "Khanda");
        delete ch;
        i++;
    }
    i = 0;
    auto millisec_since_epoch3 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    auto diff2 = millisec_since_epoch3 - millisec_since_epoch2;
    cout<<"diff2 is "<<diff2;

}
void PerformanceUtil::Input()
{

}

