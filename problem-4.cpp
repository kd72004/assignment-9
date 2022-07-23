#include"bits/stdc++.h"
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    int a,b,c;
    cin>>a>>b>>c;
    switch(ch)
    {
        case 'a':
            if(a==b || b==c || c==a)
            cout<<"isosceles triangle"<<endl;
            break;
        case 'b':
            a=a*a;
            b=b*b;
            c=c*c;
            if(a==b+c || b==c+a || c==a+b)
            cout<<"it's a Right angle triangle"<<endl;
            else 
            cout<<"it's not Right angle triangle"<<endl;
            break;
        case 'c':
            if(a==b && b==c)
            cout<<"equilateral triangle"<<endl;
            else 
            cout<<"it's not a equilateral triangle"<<endl;
            break;
        case 'd':
            exit(0);
    }
}