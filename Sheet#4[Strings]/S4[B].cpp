// Problem Name : Let's use Getline
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 23/06/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
getline(cin,s);
for(int i=0;i<s.size();i++)
{
    if(s[i]=='\\')
        break;
    else cout<<s[i];
}
}
