// https://open.kattis.com/problems/millifaersla
#include <bits/stdc++.h>
using namespace std;


int main() {

    int a, b, c;
    cin >> a >> b >> c;

    if (a < b && a < c) {
        cout << "Monnei";
    } else if (b < c) {
        cout << "Fjee";
    } else {
        cout << "Dolladollabilljoll";
    }




    return 0;
}