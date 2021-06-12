#include "BaseUtil.h"
#include "CmpndIntr.h"
#include<math.h>

#include<iostream>

using namespace std;

void CmpndIntr::Calculate()
{
    cumm = GetPrincipal()*pow((1+GetInterest()/100), GetTenor());
}

void CmpndIntr::Display()
{
    cout<<"Total value of " << GetPrincipal() <<" is "<<cumm<<endl;
    cout<<"At the rate "<< GetInterest() <<" in "<< GetTenor() << endl;
    cout<<"Total Interest gain is " << (cumm-GetPrincipal()) <<endl;
}