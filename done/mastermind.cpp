// https://open.kattis.com/problems/mastermind
#include <bits/stdc++.h>
using namespace std;


int main() {

    int n, r = 0, s = 0;
    string a, b;
    cin >> n >> a >> b;

    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) {
            r++;
            a[i] = 0;
            b[i] = 0;
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) continue;
        for (int j = 0; j < n; j++) {
           if (b[j] == 0) continue;
            if (a[i] == b[j]) {
                s++;
                a[i] = 0;
                b[j] = 0;
            }
        }
    }

    cout << r << " " << s;




    return 0;
}