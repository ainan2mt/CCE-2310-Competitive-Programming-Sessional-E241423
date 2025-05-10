// Problem Name :  Max
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 24/03/25
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a,n,mn;
    cin>>n;

        for(int i=1;i<=n;i++)
        {
            cin>>a;
            if(i==1)mn=a;
            if(a>mn)mn=a;

        }
            cout<<mn<<endl;

        }
