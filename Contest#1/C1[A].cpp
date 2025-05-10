#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, p;
    cin >> x >> p;

    double original_price = p / (1 - x / 100.0);

    cout << fixed << setprecision(2) << original_price << endl;

    return 0;
}
