// Problem Name : Smallest Pair
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 02/06/25
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long min_result = a[0] + a[1] + 1;

        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                long long sum = a[i] + a[j] + (j - i);
                if(sum < min_result)
                {
                    min_result = sum;
                }
            }
        }

        cout << min_result << endl;
    }
    return 0;
}
