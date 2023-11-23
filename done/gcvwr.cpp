// https://open.kattis.com/problems/gcvwr
#include <bits/stdc++.h>
using namespace std;


int main() {

    int g, t, n, i;
    cin >> g >> t >> n;
    int sum = 0;

    while (cin >> i) {
        sum += i;
    }
    cout << 0.9*(g - t)-sum;


    return 0;
}