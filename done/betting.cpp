// https://open.kattis.com/problems/betting
#include <bits/stdc++.h>
using namespace std;


int main() {

    double a, b, c;
    cin >> a;

    b = a/100*50;
    c = 50-a/100*50;


    cout << fixed << setprecision(10) << 1+c/b << endl << 1+b/c;

    return 0;
}