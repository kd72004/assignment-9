#include"bits/stdc++.h"
using namespace std;

int main()
{
    int a,ch;
    cin>>a;
    ch=(a%2);
    switch(ch)
    {
        case 0:
            a=a+1;
            cout<<a<<endl;
            break;
        case 1:
            cout<<a<<endl;
            break;
    }
}