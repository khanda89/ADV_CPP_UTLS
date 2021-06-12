#include "BaseUtil.h"
#include<iostream>

void BaseUtil::Start_util()
{
    int fl = 0;
    do
    {
        fl = 0;
        Input();
        Calculate();
        Display();
        std::cout<<"Do you want to repeat(1/0)"<<std::endl;
        std::cin>>fl;
    }while(fl);
}

void BaseUtil::Input()
{
    std::cout<<"Please enter the the Principal Amount"<<std::endl;
    std::cin>>p;
    std::cout<<"Please enter the interest rate "<< std::endl;
    std::cin>>in;
    std::cout<<"Please enter the tenor of the loan"<<std::endl;
    std::cin>>tn;
}