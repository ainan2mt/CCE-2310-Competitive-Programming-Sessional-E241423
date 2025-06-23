// Problem Name : Sum Digits
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 23/06/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    string num;
    long long sum=0;
    cin>>N>>num;
    for (long long i=0; i<N; i++)
    {
        sum=sum+(num[i]-'0');
    }
    cout<<sum<<endl;
    return 0;
}
