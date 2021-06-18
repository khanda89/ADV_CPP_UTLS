#include<iostream>
#include "BaseUtil.h"
#include "EMIUtil.h"
#include <math.h>

using namespace std;

void EMIUtil::Calculate()
{
    double r = GetInterest()/1200;
    double de_pow = pow(1+r, GetTenor()*12);
    double neu_pow = pow(1+r, (GetTenor()*12-1));
    emi = GetPrincipal()*r*de_pow/neu_pow;
}

void EMIUtil::Display()
{
    cout<<"The EMI Rs." << emi << " has to be paid for principal Rs." << GetPrincipal() 
    << " at interest rate "<< GetInterest() <<"%"<<endl;
}