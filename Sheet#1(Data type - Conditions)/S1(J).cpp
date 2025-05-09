// Problem Name : Multiples
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 24/03/25
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long A,B;
    cin>>A>>B;

    if (A%B==0||B%A==0) {
        cout <<"Multiples"<< endl;
    } else {
        cout <<"No Multiples"<< endl;
    }
    return 0;
}
