// Problem Name : Mathematical Expression
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 24/03/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long a,b,c;
 char s,q;
 cin>>a>>s>>b>>q>>c;
    if(s=='+')
    {
        if(a+b==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a+b;
        }
    }
    else if(s=='-')
    {
        if(a-b==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a-b;
        }
    }
    else if(s=='*')
    {
        if(a*b==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a*b;
        }
    }
}
