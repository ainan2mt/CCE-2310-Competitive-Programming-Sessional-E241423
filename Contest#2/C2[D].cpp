#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>>T;
    while (T--) {
        long long L, R;
        cin >> L >> R;
        if (L > R)
        swap(L, R);
  long long N = R - L + 1;
  cout<<N*(L+R)/2LL<<"\n";
}
 return 0;
}
