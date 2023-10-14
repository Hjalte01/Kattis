// https://open.kattis.com/problems/grassseed
#include <bits/stdc++.h>
using namespace std;


int main() {

    long double c, l, w, h, sum;
    cin >> c;
    cin >> l;
    sum = 0;
    int i = 0;
    for (i = 0; i < l; i++) {
        cin >> w >> h;
        sum += c*w*h;
    }

    cout << fixed << setprecision(7) << sum;

    


    return 0;
}