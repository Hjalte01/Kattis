// https://open.kattis.com/problems/qaly
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    double q, y;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> q >> y;
        sum += q * y;
    }
    cout << fixed << setprecision(3) << sum;

    return 0;
}