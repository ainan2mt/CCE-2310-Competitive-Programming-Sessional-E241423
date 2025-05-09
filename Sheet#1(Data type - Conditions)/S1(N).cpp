// Problem Name : Char
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 24/03/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>>x;if(x>= 'A' && x<='Z')
    {
     cout<<(char)(x+32);

    }
    else
    {
      cout<<(char)(x-32);
    }
    }
