// Problem Name : Max and Min
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 24/03/25
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,minimum,maximum;
    cin>>a>>b>>c;
    minimum= min({a,b,c});
    maximum= max({a,b,c});
    cout<<minimum<<" "<<maximum<<endl;
}
