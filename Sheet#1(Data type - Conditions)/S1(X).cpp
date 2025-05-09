// Problem Name : Two intervals
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 24/03/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c>a && c<=b)
    {
        if(d>=b)
        {
            cout<<c<<" "<<b;
        }
        else if(b>=d)
        {
            cout<<c<<" "<<d;
        }
    }
    else if(a>=c && a<=d)
    {
        if(b>=d)
        {
            cout<<a<<" "<<d;
        }
        else if(d>=b)
        {
            cout<<a<<" "<<b;
        }
    }
    else
    {
        cout<<-1;
    }
}
