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
