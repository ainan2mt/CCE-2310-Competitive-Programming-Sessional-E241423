// Problem Name : Sort Numbers
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 24/03/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long A,B,C;
    cin>>A>>B>>C;
    int a[3];
    a[0]=A;
    a[1]=B;
    a[2]=C;
    sort(a,a+3);
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;

    cout<<endl;

    cout<<A<<endl;
    cout<<B<<endl;
    cout<<C<<endl;

}
