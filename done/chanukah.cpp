// https://open.kattis.com/problems/chanukah
#include <bits/stdc++.h>
using namespace std;


int main() {

    int p, k, n;
    cin >> p;

    while (cin >> k >> n) {
        cout << k << " " << (n+1)*(n+1+1)/2-1 << "\n";
    }




    return 0;
}