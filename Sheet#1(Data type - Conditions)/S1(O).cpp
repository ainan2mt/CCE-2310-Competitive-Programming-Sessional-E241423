// Problem Name : Calculator
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 24/03/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    char x;
    cin>>n1>>x>>n2;
    if(x=='+')
    {
        cout<<n1+n2;
    }
    else if(x=='-')
    {
        cout<<n1-n2;
    }
    else if(x=='*')
    {
        cout<<n1*n2;
    }

    else if(x=='/')
    {
        cout<<n1/n2;
    }

}
