#include "BaseUtil.h"
#include "SmplIntr.h"
#include<iostream>

using namespace std;

void SmplIntr::Input()
{
    double p,in;
    cout<<"Please enter the Principal Amount"<<endl;
    cin>>p;
    SetPrincipal(p);
    cout<<"Please enter the Interest rate" <<endl;
    cin>>in;
    SetInterest(in);
}
void SmplIntr::Calculate()
{
    totalInr = GetPrincipal()*GetInterest()/100;
}
void SmplIntr::Display()
{
    cout<<GetPrincipal()<<" has interest value "<< totalInr << " at " <<GetInterest()<<"%"<<endl; 
}