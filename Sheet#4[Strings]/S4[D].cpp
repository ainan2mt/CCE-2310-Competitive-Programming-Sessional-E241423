// Problem Name : Strings
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 23/06/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,t;
cin>>s>>t;
cout<<s.size()<<" "<<t.size()<<endl<<s<<t<<endl;
char C=s[0];
s[0]=t[0];
t[0]=C;
cout<<s<<" "<<t<<endl;
}
