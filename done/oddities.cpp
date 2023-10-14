// https://open.kattis.com/problems/oddities
#include <bits/stdc++.h>
using namespace std;


int main() {

    int n, x;
    cin >> n;
    while (cin >> x) {
        if (abs(x) % 2 == 1) {
            cout << x << " is odd\n";
        } else {
            cout << x << " is even\n";
        }
    }




    return 0;
}