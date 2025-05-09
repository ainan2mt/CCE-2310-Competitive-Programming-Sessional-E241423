// Problem Name : Coordinates of a Point
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 24/03/25
#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    if (x > 0 && y > 0)
     {
        cout << "Q1";
    }
    if (x < 0 && y > 0)
    {
        cout << "Q2";
    }
    if (x < 0 && y < 0)
     {
        cout << "Q3";
    }
    if (x > 0 && y < 0) {
        cout << "Q4";
    }
   if (x == 0 && y == 0) {
        cout << "Origem";
    }
    if (y == 0 && x!=0) {
        cout << "Eixo X";
    }
    if (x == 0 && y!=0) {
        cout << "Eixo Y";
    }
}
