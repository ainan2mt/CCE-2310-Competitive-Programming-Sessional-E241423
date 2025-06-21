// Problem Name : Smallest Pair
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 16/06/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
         long long n;
         cin>>n;
        long long a[n+1];
        for(long long i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
         long long real_ans=10000000;
     for(long long base = 1; base <= n-1; base++)
        {
            for(long long comp = base + 1; comp <= n; comp++)
            {
                long long ans = a[base] + a[comp] + comp - base;
                if(ans < real_ans)
                {
                    real_ans = ans;
                }
            }
        }

        cout << real_ans << endl;
    }
    return 0;
}
