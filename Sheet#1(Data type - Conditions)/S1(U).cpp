// Problem Name : Float or int
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 24/03/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin>>n;
   int u = (int) n;
   if(n-u>0)
   {
    cout<<"float "<<u<<" "<<n-u<<endl;
   }
   else
   {
    cout<<"int "<<u<<endl;
   }
}
