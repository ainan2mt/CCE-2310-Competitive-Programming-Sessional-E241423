// Problem Name : First digit !
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 24/03/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    cin>>a;
    long long ans=a/1000;
    if(ans%2==0)cout<<"EVEN"<<endl;
    else
    cout<<"ODD"<<endl;
}
