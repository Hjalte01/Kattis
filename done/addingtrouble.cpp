// https://open.kattis.com/problems/addingtrouble
#include <bits/stdc++.h>
using namespace std;


int main() {

    int a, b, c;
    cin >> a >> b >> c;

    if (a + b == c) {
        cout << "correct!";
    } else {
        cout << "wrong!";
    }


    return 0;
}