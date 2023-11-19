// https://open.kattis.com/problems/nsum
#include <bits/stdc++.h>
using namespace std;


int main() {

    int n, i, sum;
    cin >> n;
    sum = 0;
    while (cin >> i) {
        sum += i;
    }
    cout << sum;




    return 0;
}