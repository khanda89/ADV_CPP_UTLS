#include<iostream>
#include "BaseUtil.h"
#include "EMIUtil.h"
#include <math.h>

using namespace std;

void EMIUtil::Calculate()
{
    double r = GetInterest()/1200;
    double de_pow = pow(1+r, GetTenor()*12);
    emi = GetPrincipal()*r*de_pow/(de_pow - 1);
}

void EMIUtil::Display()
{
    cout<<"The EMI Rs." << emi << " has to be paid for principal Rs." << GetPrincipal() 
    << " at interest rate "<< GetInterest() <<"%"<<endl;
    cout<<"Do you want to see EMI in splited form(y/n)?"<<endl;
    char ch = 0;
    cin>>ch;
    fflush(stdin);
    if(ch == 'y' || ch == 'Y')
    {
        double rp = GetPrincipal();
        double intr = GetInterest()/1200;
        int n = GetTenor()*12;
        while(n != 0)
        {
            double prn = 0;
            if(emi<rp)
                prn = emi-rp*intr;
            else
                prn = rp;
            cout<<"prncpl=" << prn <<", Intr="<< rp*intr <<" and pending="<<(rp-prn)<<endl;
            n--;
            rp =rp-prn;
        }
    }
    else if(ch == 'n' || ch == 'N')
    {
        return;
    }
}