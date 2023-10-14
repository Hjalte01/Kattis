// https://open.kattis.com/problems/cetvrta
#include <bits/stdc++.h>
using namespace std;


int main() {

    int x[3], y[3];
    for (int i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];
    }

    int x1, y1;

    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < i+3; j++) {
            if (x[i] == x[j % 3]) x1 = x[i];
            if (y[i] == y[j % 3]) y1 = y[i]; 
            if (x && y) break;
        }
    }

    for (int i: x) {
        if (i != x1) {
            x1 = i;
            break;
        }
    }
    for (int i: y) {
        if (i != y1) {
            y1 = i;
            break;
        }
    }

    cout << x1 << " " << y1;



    return 0;
}