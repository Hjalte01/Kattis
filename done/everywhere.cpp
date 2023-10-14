// https://open.kattis.com/problems/everywhere
#include <bits/stdc++.h>
using namespace std;


int main() {

    int n, t, k;
    cin >> t;
    string c;

    while (cin >> n) {
        string s[n];
        int p = 0;
        for (int i = 0; i < n; i++) {
            cin >> c;
            s[i] = c;
            for (int j = 0; j < i; j++) {
                if (s[j].find(c, 0) != string::npos) {
                    p--;
                    break;
                }
            }
            p++;
        }

        cout << p << "\n";
    }




    return 0;
}