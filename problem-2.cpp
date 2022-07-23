#include"bits/stdc++.h"
using namespace std;

int main()
{
    int a,b;
    char ch;
    cout<<"enter two numbers -> "<<endl;
    cin>>a>>b;
    
    cout<<"a. addition "<<endl;
    cout<<"b. Subtraction "<<endl;
    cout<<"c. Multiplication "<<endl;
    cout<<"d. Division "<<endl;
    cout<<"e. Exit "<<endl;

    cout<<"Enter your choice"<<endl;
    cin>>ch;

    switch(ch)
    {
        case 'a':
            cout<<a+b<<endl;
            break;
        case 'b':
            cout<<a-b<<endl;
            break;
        case 'c':
            cout<<a*b<<endl;
            break; 
        case 'd':
            cout<<a/b<<endl;
            break;   
        case 'e':
            exit(0);        
    }



}