#include"bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ch=(n%4==0 && (n%400==0 || n%100!=0));
    // if(n%4==0 && (n%400==0 || n%100!=0))
    // cout<<"Leap year"<<endl;
    // else 
    // cout<<"Not a Leap Year"<<endl;
    switch(ch)
    {
        case 1:
            cout<<"It's Leap Year"<<endl;
            break;
        case 0:
            cout<<"It's Not a Leap Year"<<endl;
            break;
    }
}