// Problem Name : PUM
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 24/03/25
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << count << " ";
            count++;
        }
        cout <<"PUM"<<endl;
       count++;
    }
}
