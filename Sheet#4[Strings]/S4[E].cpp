// Problem Name : Count
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 23/06/25
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int sum=0;
for(int i=0; i<s.size();i++)
{
    sum+=s[i]-'0';
}
cout<<sum<<endl;
}
