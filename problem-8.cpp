#include "bits/stdc++.h"
using namespace std;

int main()
{
    int ch, a;
    cin >> a;
    ch = (a > 0);//1 positive //0 negative number 
    switch (ch)
    {
    case 0:
        a = a - (a * 2);
        cout << a << endl;
        break;
    case 1:
        a = a - (a * 2);
        cout << a << endl;
        break;
    }
    // cout<<(3-5)<<endl;
}