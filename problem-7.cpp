#include<bits/stdc++.h>
using namespace std;
int main()
{
    int unit,bill;
    float discount;
    cout<<"enter unit -> "<<endl;
    cin>>unit;
    if(unit>=1 && unit<=51)
    {
        bill=unit*5;  //first 50 unit
    }
    else if(unit>=52 && unit<=152)
    {
        bill=(unit-50)*7;    //second 100 unit 
        bill=bill+250;
    }
    else if(unit>=153 && unit<=253)
    {
        bill=(unit-150)*9;    //third 100 unit 
        bill=bill+950;
    }
    else 
    {
        bill=(unit-250)*10;   //above 250 unit 
        bill=bill+1850;
    }
    discount=bill*1.2;
    bill=bill-discount;
    cout<<"your bill is "<< bill<<endl;

}