// Problem Name :  Age in Days
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 24/03/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<(n/365)<<" years"<<endl;
    n=n%365;
    cout<<(n/30)<<" months"<<endl;
    n=n%30;
    cout<<n<<" days"<<endl;
}
