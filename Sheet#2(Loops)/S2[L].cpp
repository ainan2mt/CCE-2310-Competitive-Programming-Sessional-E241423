// Problem Name : GCD
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 24/03/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    int mini = min(a, b);
    for (int i=mini; i>=1; i--)
    {
        if (a % i==0 && b % i==0)
        {
         cout<<i<<endl;
            break;
        }
    }
}
