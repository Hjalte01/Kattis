// https://open.kattis.com/problems/spritt
#include <bits/stdc++.h>
using namespace std;


int main() {

    int n, x, a;
    cin >> n >> x;


    while (cin >> a) {
        x -= a;
    }

    if (x >= 0) {
        cout << "Jebb";
    } else {
        cout << "Neibb";
    }




    return 0;
}